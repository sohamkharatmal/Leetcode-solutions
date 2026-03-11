#include <cmath>

class Solution {
public:

    int* bin(int x, int &size){
        int* arr = new int[32];
        int i = 0;

        if(x == 0){
            arr[0] = 0;
            size = 1;
            return arr;
        }

        while(x > 0){
            arr[i] = x % 2;
            x /= 2;
            i++;
        }

        size = i;
        return arr;
    }

    int bitwiseComplement(int n) {

        int size;
        int* arz = bin(n, size);

        // 1's complement
        for(int i = 0; i < size; i++){
            if(arz[i] == 0) arz[i] = 1;
            else arz[i] = 0;
        }

        // convert binary to decimal
        int ans = 0;

        for(int j = 0; j < size; j++){
            ans += arz[j] * pow(2, j);
        }

        delete[] arz;

        return ans;
    }
};