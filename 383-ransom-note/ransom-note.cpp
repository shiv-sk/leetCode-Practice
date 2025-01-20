class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char , int>umap;
        for(char c : magazine){
            umap[c]++;
        }
        for(char ch : ransomNote){
            if(umap[ch] <= 0){
                return false;
            }
            umap[ch]--;
        }
        return true;
    }
};