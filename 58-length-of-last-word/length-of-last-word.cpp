class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1 , cnt = 0;
        while(i >= 0 && s[i] == ' '){
            i--;
        }
        for(; i>=0; i--){
            if(s[i] != ' '){
                cnt++;
            }else{
                break;
            }
        }
        return cnt;
    }
};