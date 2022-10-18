class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        
        string prev = countAndSay(n-1);
        string ans;
        
        int len = prev.length();
        for(int i = 0; i < len ; ){
            int j = i , cnt = 0;
            while(j < len){
                if (prev[i] == prev[j]){
                    cnt++;
                    j++;
                }
                else{
                    break;
                    
                }
            }
            ans.push_back(cnt + '0');
            ans.push_back(prev[i]);
            i = j;
        }
        return ans;
        
        
    }
};