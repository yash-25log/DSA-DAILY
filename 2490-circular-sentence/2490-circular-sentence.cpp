class Solution {
public:
    bool isCircularSentence(string str) {
        int n = str.length();
        
        for(int i = 0 ; i < n ; i++){
            while(i < n and str[i] != ' '){
                i++;
            }
            if( i+1  < n and str[i-1] != str[i+1] ) return false;
            
            
        }
        if(str[0] != str[n-1]) return false;
        return true;
        
        
    }
};