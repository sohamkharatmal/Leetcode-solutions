class Solution {
public:
bool istriangle(int a,int b,int c){
    if(a+b>c && a+c>b && b+c>a){
        return true;
    }
    return false;
}
    int largestPerimeter(vector<int>& nums) {
       if(nums.size()<3) return 0;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=2;i--){
            if(nums[i-1]+nums[i-2]>nums[i]) return nums[i]+nums[i-1]+nums[i-2];
        }
        return 0;
    }
};