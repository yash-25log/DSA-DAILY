class Solution {
public:
    int minCost(string colors, vector<int>& time) {
        int n = time.size();
        int ans = 0;
        int prev = 0;
        
        for(int cur = 1; cur< n; cur++){
            if(colors[prev] == colors[cur]){
                if(time[prev] < time[cur] ){
                    ans += time[prev];
                    prev = cur;
                }
                else{
                    ans += time[cur];   
                }
            }
            else{
                prev = cur;
            }
        }
        return ans;
        
    }
};