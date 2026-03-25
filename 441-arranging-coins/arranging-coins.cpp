class Solution {
public:
    int arrangeCoins(int n) {
        int div=1;
    int ct=0;
    if (n==0 || n==1)return n;
  
        while(n>=div){
            n-=div;
            div++;
              ct++;
             
        }
        return ct;
    }
};