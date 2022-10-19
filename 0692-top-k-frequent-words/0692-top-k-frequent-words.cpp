class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> frequency;
        
        for(auto word:words){
            frequency[word]++;
        }
        
        vector<string> ans;
        while(k--){
            int mx = 0;
            string str;
            for(auto[key,val] : frequency){
                if(val > mx){
                    mx = val;
                    str = key;
                }
                else if(val == mx){
                    if(str > key){
                        str = key;
                        
                    }
                }
                
            }
            ans.push_back(str);
            frequency[str] = -1;
            cout<< str<<' '<< frequency[str];
        }
        return ans;
    }
};