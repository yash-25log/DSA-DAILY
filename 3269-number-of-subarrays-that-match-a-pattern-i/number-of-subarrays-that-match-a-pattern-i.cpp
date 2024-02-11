class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int n = nums.size(); 
        int m = pattern.size();
        int ans = 0;

        for(int s = 0 ; s < n; s++){
            int e = s + m;
            if(e >= n)break;

            bool ok = true;
            for(int i = 0; i < m; i++){
                int curr = 0;
                if(nums[s + i + 1] > nums[s + i])curr = 1;
                if(nums[s + i + 1] < nums[s + i])curr = -1;

                if(curr !=  pattern[i]){
                        ok = false;
                        break;
                }
            }
            if(ok)ans++;
        }
        return ans;
    }
};