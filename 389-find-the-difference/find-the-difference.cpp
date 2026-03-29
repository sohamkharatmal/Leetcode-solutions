class Solution {
public:
    char findTheDifference(string s, string t) {
       int res=0;
       for(char i:s) res^=i;
       for(char j:t) res^=j;
       return res;
    }
};