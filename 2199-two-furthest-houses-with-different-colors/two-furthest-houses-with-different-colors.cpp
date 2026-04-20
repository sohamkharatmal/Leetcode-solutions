class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int l=0,r=colors.size()-1;
int a=0,b=0;
        while(l!=r){
            if(colors[l]!=colors[r]) a=max(r-l,a);
            r--;
        }
          l = 0;
        r = colors.size() - 1;
          while(l!=r){
            if(colors[l]!=colors[r]) b=max(r-l,b);
            l++;
        }
        int diff=max(a,b);
        return diff;
    }
};