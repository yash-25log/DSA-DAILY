class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int , int >m;
        for(auto ele : nums){
            m[ele]++;

        }
        int count = 0;
        for(auto a: m){
            int t = a.second;
            if(t == 1)return -1;
            count += t/3;
            if(t % 3 ) count++;

        }
        return count;
    }

};