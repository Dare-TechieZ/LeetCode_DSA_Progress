class Solution {
public:
    bool isValid(string s) {
        stack<char> st;//no implicit using namespace std;).
        for(int i=0;i<s.length();++i){
            if(s[i]=='{'){ 
                st.push(s[i]);
            }
            else if(s[i]=='[') {
                st.push(s[i]);
            }
            else if(s[i]=='(') {
                st.push(s[i]);
            }
            else if(s[i]=='}' and !st.empty() and st.top()=='{'){
                st.pop();
            }
            else if(s[i]==']' and !st.empty() and st.top()=='[') {
                st.pop();
            }
            else if(s[i]==')' and !st.empty() and st.top()=='(') {
                st.pop();     
            }
            else{
                return false;
            }
        }
        return st.empty();
    }
};
