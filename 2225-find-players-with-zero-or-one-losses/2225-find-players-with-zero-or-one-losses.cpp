class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int > w,  l;
        unordered_map<int,int>tot;
        for(auto it: matches){
            w.insert(it[0]) , l.insert(it[1]), tot[it[1]]++;
            
        }
        vector<int>v1, v2;
        vector<vector<int>>ans;
        for(auto it:w){
            if(tot.find(it) == tot.end() ){
                v1.push_back(it);
            }
        }
        for(auto it:l){
            if(tot[it] == 1 ){
                v2.push_back(it);
                
            }
        }
        ans.push_back(v1);
        ans.push_back(v2);
        
        return ans;
        
    }
};