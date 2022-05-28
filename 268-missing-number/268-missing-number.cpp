class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int ans = 0;    
        int n = nums.size();
        
        for(int i = 0; i  < n-1 ; i++){
            if(nums[i+1] - nums[i] != 1){
                ans = nums[i] + 1;
                break;
            }
        }
        if(nums[0] != 0){
            ans = 0;
        }
        if(nums[n-1] != n){
            ans = n;
        }
        return ans;
            
    }
};