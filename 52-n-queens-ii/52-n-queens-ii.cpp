class Solution {
public:
    int ans;
    bool isValid(vector<string> &s,int r,int c){
        //upwards 
        for(int row=r-1;row>=0;row--){
             if(s[row][c]=='Q')return false;
         }
        //up right diagonal
        for(int row=r-1,col=c+1;row>=0&&col<s.size();row--,col++){
             if(s[row][col]=='Q')return false;
         }
        // up left diagonal
        for(int row=r-1,col=c-1;row>=0&&col>=0;row--,col--){
             if(s[row][col]=='Q')return false;
         }
         return true;
    }
    void Nqueens(vector<string> &s,int cq){
        if(cq==s.size()){
            ans++;
            return;
        }
        for(int i=0;i<s.size();i++){
            if(isValid(s,cq,i)){
                s[cq][i]='Q';
                Nqueens(s,cq+1);
                s[cq][i]='.';
            }
        }
        return;
    }
    int totalNQueens(int n) {
        string q=".........";
        vector<string> s(n,q.substr(0,n));
        ans=0;
        Nqueens(s,0);
        return ans;
    }
};