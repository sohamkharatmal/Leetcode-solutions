#include <iostream>
using namespace std;

class Solution {
public:
  

    int trailingZeroes(int n) {
     int t=0;
     while(n>0){
        n/=5;
        t+=n;
     }
     return t;
    }
};