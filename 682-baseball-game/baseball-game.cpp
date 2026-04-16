

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> nums;

        for(string i : operations){
            
            if(i != "C" && i != "D" && i != "+"){
                nums.push(stoi(i));
            }
            else if(i == "+"){
                int a = nums.top(); nums.pop();
                int b = nums.top();
                nums.push(a);              // restore
                nums.push(a + b);
            }
            else if(i == "D"){
                nums.push(2 * nums.top());
            }
            else { // "C"
                nums.pop();
            }
        }

        int sum = 0;
        while(!nums.empty()){
            sum += nums.top();
            nums.pop();
        }

        return sum;
    }
};

