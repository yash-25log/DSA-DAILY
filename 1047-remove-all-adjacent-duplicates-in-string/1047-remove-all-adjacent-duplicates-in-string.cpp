class Solution {
public:
    string removeDuplicates(string S) {
        
        string ans;
        
        for(char c:S){
            
            if(ans.empty()){
                ans.push_back(c);
                
            }
            else if(c == ans.back()){
                ans.pop_back();
            }
            else{
                ans.push_back(c);
            }
        }
        return ans;
    }
};