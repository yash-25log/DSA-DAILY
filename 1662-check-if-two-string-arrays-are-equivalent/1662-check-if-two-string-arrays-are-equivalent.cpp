class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int arr1_len = word1.size(), arr2_len = word2.size();
        int st1 = 0, st2 = 0;
        int i = 0 , j = 0;
        while(st1 < arr1_len and st2< arr2_len){
            int curr_len1 = word1[st1].length(), curr_len2 = word2[st2].length();
            while(i < curr_len1 and j < curr_len2){
                if(word1[st1][i] != word2[st2][j] ) return false;
                i++, j++;
                
            }
            if( i == curr_len1){
                i = 0;
                st1++;
            }
            if(j == curr_len2){
                j = 0 ;
                st2 ++;
                
            }
            
        }
        return (st1 == arr1_len and st2 == arr2_len);
    }
};