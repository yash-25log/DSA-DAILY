class Solution {
    
public:
    int lengthOfLongestSubstring(string s) {
        //Notice that the answer must be a substring, "pwke" is a subsequence and not a                   substring.
        
        vector<int> dict(128, -1);
        int maxLen = 0, start = -1;
        
        for (int i = 0; i != s.length(); i++) {
        
            if (dict[s[i]] > start)
                start = dict[s[i]];
            
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        
        return maxLen;

    }
};