class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        unordered_set<int>s;
        
        for(int i = 0; i< arr.size();i++){
            if(i > k) s.erase(arr[i-k-1]);
            if(s.count(arr[i])!=0) return true;
            s.insert(arr[i]);
            
        }
        return false;
    }
};