class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
   int a=nums1.size();
   int b=nums2.size();
   int xr=0;
   if(a%2==1){
   for(int i:nums2){
    xr^=i;
   }
   }

   if(b%2==1){
   for(int i:nums1){
    xr^=i;
   }
   }
return xr;
    }
};