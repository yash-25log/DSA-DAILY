class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int c1= 0 , c2 = 0;
        vector<char> vow = {'a','e','i','o','u','A','E','I','O','U'};
        for(int i = 0; i < n / 2; i++){
            for(auto x : vow){
                if(s[i] == x){
                    c1++;
                    break;
                }
            }
        }
        for(int i = n/2; i < n ; i++){
            for(auto x : vow){
                if(s[i] == x){
                    c2++;
                    break;
                }
            }
        }
        return c1 == c2;
        
    }
};