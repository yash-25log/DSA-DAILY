class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size())return false;
        unordered_map<string,bool> un;
        for(int i=0;i<s.size()-k+1;i++){
            string t=s.substr(i,k);
            if(un.count(t)==0){
                un[t]=true;
            }
        }
        long long int v = 1<<k;
        if(un.size()==v)
            return true;
        return false;
    }
};