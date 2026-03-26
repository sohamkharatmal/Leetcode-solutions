class Solution {
public:
bool presq(int x){
    int z=sqrt(x);
    return z*z==x;

}
    int numberOfCuts(int n) {
        if(n==1) return 0;
        if(n%2==0) return n/2;
        return n;
    }
};