class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        int i;
        for(i = n-1; i >= 0;--i){
            char ch = num[i];
            int cur = int(ch) - 48;
            if(cur % 2 != 0){
                break;
                
            }
            
        }
        return num.substr(0,i+1);
    }
};