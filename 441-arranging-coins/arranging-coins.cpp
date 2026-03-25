class Solution {
public:
    int arrangeCoins(int n) {
    int x=1;
    do{
        (pow(x,2)+x)/2<n;
        x++;
    }while((pow(x-1,2)+x-1)/2<=n);
    return x-2;
    }
};