class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score=0,counter=0;
        for(int i=0;i<events.size();i++){
            if(events[i]=="1" || events[i]=="WD" || events[i]=="NB" && counter<10) score++;
            else if(events[i]=="2" && counter<10) score+=2;
            else if(events[i]=="3" && counter<10) score+=3;
            else if(events[i]=="4" && counter<10) score+=4;
            else if(events[i]=="5" && counter<10) score+=5;
            else if(events[i]=="6" && counter<10) score+=6;
            else if(events[i]=="W" && counter<10) counter++;
             if(counter>=10) {counter=10;
             break;
        }
            
        }
       
        vector <int> arr={score,counter};
        return arr;
    }
};