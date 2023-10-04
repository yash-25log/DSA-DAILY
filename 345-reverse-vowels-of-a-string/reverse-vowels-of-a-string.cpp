class Solution {
public:
    string reverseVowels(string s) {
        string word = s;
        int l = 0 , r = s.length() -1 ;
        string v = "aeiouAEIOU";

        while(l  < r){
            while(l < r && v.find(word[l]) == string::npos) l++;
            while(l < r && v.find(word[r]) == string:: npos)r--;
            swap(word[l], word[r]);
            l++;
            r--;
        }
        return word;
        

    }
};