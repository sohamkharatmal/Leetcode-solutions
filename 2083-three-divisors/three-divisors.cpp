class Solution {
public:
    bool isThree(int n) {
        int ct=0;
       for(int i=n/2;i>1;i--){
        if(n%i==0) ct++;
       }
       if(ct==1) return true;
       return false;
    }
};