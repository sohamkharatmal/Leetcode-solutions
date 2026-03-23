class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int xr=nums[0];
        for(int i=1;i<nums.size();i++){
            xr^=nums[i];
        }
       // if(xr==0) return nums.size();
        for(int j=0;j<=nums.size();j++){
            xr^=j;
        }
   return xr;
    }
};