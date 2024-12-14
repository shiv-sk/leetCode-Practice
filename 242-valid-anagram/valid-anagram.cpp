class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.size() != s.size()){
            return false;
        }
        unordered_map<char , int>umap;
        for(char ch : s){
            umap[ch]++;
        }
        for(char c : t){
            if(umap.find(c) == umap.end() || umap[c] <= 0){
                return false;
            }
            umap[c]--;
        }
        return true;
    }
};