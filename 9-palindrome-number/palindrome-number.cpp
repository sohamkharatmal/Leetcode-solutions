class Solution {
public:
    
    bool isPalindrome(int x) {
        if(x<0)return false;
      

        vector <int> nums;
        while(x>=1){
            int z=x%10;
            x/=10;
            nums.push_back(z);
        }
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            if(nums[l]!=nums[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};