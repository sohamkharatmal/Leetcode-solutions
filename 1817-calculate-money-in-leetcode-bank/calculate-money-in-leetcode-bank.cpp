class Solution {
public:
    int totalMoney(int n) {
        int z=n/7;
        int m=n%7;
        int sum=0;
        for(int i=0;i<z;i++){
            sum+=28+(7*i);
        }
        for(int i = 1; i <= m; i++) {
    sum += z + i;
}
        return sum;
    }
};