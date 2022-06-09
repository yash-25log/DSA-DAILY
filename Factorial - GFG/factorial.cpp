// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    long long int factorial(int N){
        //code here
        if(N == 1 || N == 0){
            return 1;
        }
        else{
            long long int rec = factorial(N-1);
            long long int res = N*rec;
        
            return res;
            
        }
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends