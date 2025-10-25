class Solution {
public:
    vector<string>v;
    char key[10][5]={""," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            //   0     1     2       3    4    5    6      7     
    void phoneKeypad(char *ip,int i,char*op,int j){
        //base case
        if(ip[i]=='\0'){
            op[j]='\0';
            v.push_back(op);
            return;
        }
        //recursion
        int digit=(ip[i]-'0');
        for(int k=0;key[digit][k]!='\0';k++){
            op[j]=key[digit][k];
            phoneKeypad(ip,i+1,op,j+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        char op[100];char ip[100];
        for(int i=0;i<digits.length();i++){
            ip[i]=digits[i];
        }
        phoneKeypad(ip,0,op,0);
        return v;
    }
};
