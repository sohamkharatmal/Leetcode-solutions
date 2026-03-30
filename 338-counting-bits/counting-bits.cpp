class Solution {
public:
int bsum(int x){
    int sum=0;
    while(x>0){
     if(x%2==1) sum++;
     x/=2;
    }
    return sum;
}
    vector<int> countBits(int n) {
        vector <int> nums(n+1);
        for(int i=0;i<=n;i++){
            nums[i]=bsum(i);
        }
        return nums;
    }
};