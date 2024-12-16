class Solution {
public:
    string reverseVowels(string s) {
        string word = s, vowels = "aeiouAEIOU";
        int n = s.size();
        int left = 0, right = n - 1;
        while (left < right) {
            while (left < right && vowels.find(word[left]) == string::npos) {
                left++;
            }
            while (left < right && vowels.find(word[right]) == string::npos) {
                right--;
            }
            swap(word[left], word[right]);
            left++;
            right--;
        }
        return word;
    }
};