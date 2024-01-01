class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cc = 0;
        int ci = 0;
        while(ci < s.size() && cc < g.size()){
            if(s[ci ] >= g[cc]){
                cc++;
            }
            ci++;
        }
        // for(int i = 0 ; i < g.size(); i++){
        //     for(int j = 0 ; j < s.size(); j++){
        //         if(s[j] >= g[i]){
        //             c += 1;
        //             break;
        //         }
        //     }
        // }
        return cc;
    }
};