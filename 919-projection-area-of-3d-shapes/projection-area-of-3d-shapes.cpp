class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int a=grid.size();
    
        int yz=0;
        for(int i=0;i<a;i++){
            int rowmax=0;
            for(int k=0;k<a;k++){
            rowmax=max(rowmax,grid[k][i]);
            } yz+=rowmax;
        }
        int xz=0;
        for(int j=0;j<a;j++){
            int colmax=0;
            for(int l=0;l<a;l++){
                colmax=max(colmax,grid[j][l]);
            }
            xz+=colmax;
        }
        int xy=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                if(grid[i][j]!=0) xy++;
            }
        }
        return xy+yz+xz;
    }
};