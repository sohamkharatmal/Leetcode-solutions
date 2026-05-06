class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=candies[0];
        for(int i:candies){
            maxi=max(maxi,i);
        
        }
        vector <bool> arr;
        for(int i=0;i<candies.size();i++){
            if(extraCandies+ candies[i]>=maxi){
                arr.push_back(true);
            }
            else arr.push_back(false);
        }
        return arr;
    }
};