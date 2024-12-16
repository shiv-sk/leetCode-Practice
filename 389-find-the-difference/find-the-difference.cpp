class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size() , m = t.size();
        vector<int>freq(26 , 0);
        for(int i = 0; i<n; i++){
            freq[s[i] - 'a']++;
        }
        for(int j = 0; j<m; j++){
            freq[t[j] - 'a']--;
            if(freq[t[j] - 'a'] < 0){
                return t[j];
            }
            // freq[t[j] - 'a'];
        }
        return 'a';
    }
};