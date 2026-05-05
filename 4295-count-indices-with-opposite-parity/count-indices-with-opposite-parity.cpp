class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector <int> answer(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                 int ct=0;
                for(int j=i+1;j<nums.size();j++){
                   
                    if(nums[j]%2==1) ct++;
                }
                answer[i]=ct;
            }
            else {
                int cot=0;
                for(int j=i+1;j<nums.size();j++){
                   
                    if(nums[j]%2==0) cot++;
                }
                answer[i]=cot;
            }
        }
        return answer;
        
    }
};