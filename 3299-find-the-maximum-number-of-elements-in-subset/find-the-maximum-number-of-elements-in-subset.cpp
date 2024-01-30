class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n = nums.size();

        map<int, int>mp;
        for(int i = 0 ; i < n; i++){
            mp[nums[i]]++;
        }
        int ans = 1;

        if(mp[1] % 2 == 1) ans = max(ans, mp[1]);
        else ans = max(ans, mp[1]-1);

        for(int i = 2 ; i*i <= 1e9; i++){
            long long num = i;
            int c = 0;

            while(num <= 1e9){
                if(mp.find(num) == mp.end()) {
                    break;
                }
                if(mp[num] >= 2) c += 2, num = num * num;
                else{
                    c++;
                    break;

                }  
            }
            if(mp.find(num) == mp.end()) c--;
            ans  = max(ans, c);

        }
        return ans;

    }
};