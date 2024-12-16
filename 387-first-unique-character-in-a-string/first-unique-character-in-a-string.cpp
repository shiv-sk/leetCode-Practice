class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>freq(26 , 0);
        int n = s.size();
        for(int i = 0; i<n; i++){
            freq[s[i] - 'a']++;
        }
        for(int j = 0; j<n; j++){
            if(freq[s[j] - 'a'] == 1){
                return j;
            }
        }
        return -1;
    }
};