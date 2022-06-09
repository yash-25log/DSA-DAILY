class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int f = 0, l = numbers.size()-1;
        
        while(numbers[f] + numbers[l] != target){
            if(numbers[f] + numbers[l] < target){
                f++;
            }
            else{
                l--;
            }
            
        }
        return vector<int> ({f+1,l+1});
    }
};