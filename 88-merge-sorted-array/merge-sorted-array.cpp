class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> sol(m+n);
        for(int i=0;i<m;i++){
            sol[i]=nums1[i];
        }
        int x=m;
        for(int j=0;j<n;j++){
            sol[x]=nums2[j];
            x++;
        }
        for(int i = 0; i < sol.size()-1; i++) {
    for(int j = 0; j < sol.size()-i-1; j++) {
        if(sol[j] > sol[j+1]) {
            swap(sol[j], sol[j+1]);
        }
    }
}
for(int i=0;i<sol.size();i++){
    nums1[i]=sol[i];
}
    }
};