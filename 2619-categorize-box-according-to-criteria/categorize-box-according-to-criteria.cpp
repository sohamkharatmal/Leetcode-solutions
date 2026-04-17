class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        int ct=0;

        if(length>= 10000 || width>=10000 || height>=10000 || (long long)length*width*height>=1000000000 ){
            ct+=1;
        }
        if(mass>=100){
            ct+=10;
        }
            string s;
        if(ct==11){
            s="Both";
        }


        else if(ct==1){
            s="Bulky";
        }
        else if(ct==10){
            s="Heavy";
        }
        else{
            s="Neither";
        }
        return s;
    }
};