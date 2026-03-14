class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
    int a=arr1[0];
        for(int i=1;i<arr1.size();i++){
          a^=arr1[i];
        }
    int b=arr2[0];
      for(int j=1;j<arr2.size();j++){
          b^=arr2[j];
        }
        int xr=(a&b);
        return xr;
    }
};