class Solution {
public:
    int largestPerimeter(vector<int>& arr) {
        sort(arr.rbegin(),arr.rend());
        int n = arr.size();
        for(int i = 1; i < n-1; i++){
            int a = arr[i-1], b = arr[i], c = arr[i+1];
            if(a<b+c){
                return a+b+c;
                
            }
        }
        return 0;
    }
};