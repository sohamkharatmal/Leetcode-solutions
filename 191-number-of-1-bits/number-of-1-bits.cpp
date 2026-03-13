class Solution {
public:
    int hammingWeight(int n) {
        int a=0;
        int count;
      while(n>0){
        a=n%2;
        n/=2;
        if(a==1) count++;
      }  
      return count;
    }
};