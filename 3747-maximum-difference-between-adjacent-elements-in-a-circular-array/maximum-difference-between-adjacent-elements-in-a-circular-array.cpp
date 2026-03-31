class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int diff;
        int maxi=0;
        for(int i=0;i<nums.size()-1;i++){
           int diff=abs(nums[i]-nums[i+1]);
           maxi=max(maxi,diff);
            }
            int adj=abs(nums[0]-nums[nums.size()-1]);
            maxi=max(maxi,adj);
        
    return maxi;}
};