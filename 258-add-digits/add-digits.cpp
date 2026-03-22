class Solution {
public:
    int sum(int z){
        int ct=0;
    if(z<0){
        int neg=-1*z;
        while(neg>0){
            ct+=neg%10;
            neg/=10;
    
        }
       if(ct>9) return sum(ct);
       return ct;
    }
      while(z>0){
            ct+=z%10;
            z/=10;
    
        }
        if(ct>9) return sum(ct);
        return ct;
    }
    int addDigits(int num) {
        return sum(num);
    }
};