class Solution {
public:
    vector<string>v;string s;
    void generate(string& s,int open_remaining,int close_remaining){
        if(open_remaining==0 and close_remaining==0){
            //if either of the opening/closing brackets remaining will be 0->
            //workflow mai back jakr return krenge kuch na kuch(val/void)->
            //Higher chances of using backtraking!!
            v.push_back(s);
            cout<<s<<endl;
            return ;
        }
        if(open_remaining>0){ //1 condition of opening parenthesis
            s.push_back('(');
            generate(s,open_remaining-1,close_remaining);
            s.pop_back();//backtracking
        }
        if(close_remaining>0){// 2 conditions of closing parenthesis
            if(open_remaining<close_remaining){
                s.push_back(')');
                generate(s,open_remaining,close_remaining-1);
                s.pop_back();//backtracking
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        generate(s,n,n);
        return v;
    }
};
