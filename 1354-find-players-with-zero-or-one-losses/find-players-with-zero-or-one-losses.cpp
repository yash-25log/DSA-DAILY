class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>lost;

        for(auto &it : matches){
            int lose = it[1];
            lost[lose]++;
        }

        vector<int>oneLost, notLost;

        for(auto &it : matches){
            int lose = it[1];
            int win = it[0];

            if(lost[lose] == 1){
                oneLost.push_back(lose);
            }
            if(lost.find(win) == lost.end()){
                notLost.push_back(win);
                lost[win] = 2;
                
            }

        }
        sort(notLost.begin(), notLost.end());
        sort(oneLost.begin(), oneLost.end());

        return{notLost, oneLost};

    }
};