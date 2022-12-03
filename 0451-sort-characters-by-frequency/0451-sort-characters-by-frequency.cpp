class Solution {
public:
    string frequencySort(string s) {
        int si = s.size();
        unordered_map<char,int>freq;
        vector<string>bucket(s.size()+1,"");
        string res;
        for(char ch : s) freq[ch]++;
        
        for(auto& it: freq){
            int n = it.second;
            char c = it.first;
            
            bucket[n].append(n,c);
            
        }
        for(int i = si; i > 0; i--){
            if(!bucket[i].empty() ){
                res.append(bucket[i]);
            }
        }
        return res;
            
        
    }
};