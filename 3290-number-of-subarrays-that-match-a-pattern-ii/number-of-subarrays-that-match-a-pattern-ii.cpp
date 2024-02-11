//prewritten template for KMP
void computeLPSArray(vector<int>& pattern, vector<int>& lps){
    int patternLen = pattern.size();
    int len =  0 ;//length of the previous longest prefix suffix
    lps[0] = 0;//lps[0] is always 0
    int i = 1;

    while( i < patternLen){
        if(pattern[i] == pattern[len]){
            len++;
            lps[i] = len;
            i++;

        }
        else{
            if(len != 0){
                len = lps[len-1];

            }
            else{
                lps[i] = 0;
                i++;
            }

        }

    }

}
//function to perform pattern searching using KMP algorithm
int KMPSearch(vector<int>& text,vector<int>& pattern){
    int textLen = text.size();
    int patternLen  = pattern.size();
    //create lps array to store longest prefix suffix values
    vector<int>lps(patternLen, 0);
    //Preprocess tthe pattern to build lps array
    computeLPSArray(pattern, lps);
    int i = 0; //index for text[]
    int j = 0; // index for pattern[]
    int cnt = 0;
    while(i < textLen){
        if(pattern[j] == text[i]){
            i++;
            j++;
        }
        if(j == patternLen){
            cnt++;
            j = lps[j-1];
        }
        else if(i  <textLen && pattern[j] != text[i]){
            if(j != 0){
                j = lps[j -1];
            }
            else i++;
        }
    }
    return cnt;
}

class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int n = nums.size();
        int m = pattern.size();

        vector<int>b (n-1);
        for(int i = 0 ; i < n - 1; i++){
            int curr = 0;
            if(nums[i + 1]  > nums[i])curr = 1;
            if(nums[i + 1]  < nums[i])curr = -1;
            b[i] = curr;
        }
        int ans = KMPSearch(b, pattern);
        return ans;
    }
};
