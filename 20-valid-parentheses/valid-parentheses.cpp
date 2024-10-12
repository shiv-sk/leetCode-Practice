class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int i = 0;
        while(i < s.size()){
            if((s[i] == '(') || (s[i] == '[') || (s[i] == '{')){
                st.push(s[i]);
            }
            else{
                if(st.empty() || 
                (s[i] == ')' && st.top() != '(') || 
                (s[i] == ']' && st.top() != '[') || 
                (s[i] == '}' && st.top() != '{') ){
                    return false;
                }
                st.pop();
            }
            i++;
        }
        return st.empty();
    }
};