// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        if (n == 0){
            return 0;
            
        }
        else if(n == 1){
            return 1;
        }
        else{
            long long int rec1 = 0;
            long long int rec2 = 1;
            long long int res = 0;
            long long int i = 2;
            while(i <= n){
                res = (rec1 + rec2) % 1000000007;
                rec1 = rec2;
                rec2 = res;
                i++;
                
            }
            return res;
        }
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends