class Solution {
public:
    int isPossible(vector<int>& nums, int mid){
        int count = 1, tempSum = 0, n = nums.size();
        
        for(int i=0;i<n;i++){
            if((tempSum+nums[i])<=mid) tempSum += nums[i];
            
            else count++, tempSum = nums[i];
            
        }  
        return count;
    }
    
    
    
    int splitArray(vector<int>& nums, int m) {
        
        int l = 0, r = 0, mid = 0, ans = 0, n = nums.size();
        
        for(int i = 0; i < n; i++) l = max(l,nums[i]), r += nums[i];   
        
        while(l<=r){
            mid = (l+r)/2;
            int count = isPossible(nums,mid);//no. of subarrays possible if max sum is mid
            
            if(count<=m){
                r = mid-1;
                ans = mid;
            }
            else{
                l = mid+1;
            }
            
        }
        return ans;
    }
};