class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(vector<int> & nums, int i){
        if( i == nums.size()){
            ans.push_back(nums);
            return ;
        }
        
        for(int j = i; j < nums.size(); j++){
            swap(nums[i], nums[j]);
            helper(nums, i+1);
            //BACKTRACK
            swap(nums[i] , nums[j]);
        }
        return ;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        //1ST APPROACH - CALCULATE FACTORIAL
        //2ND - COUNT ARRAY2
        helper(nums, 0);
        return ans;
        
    }
};