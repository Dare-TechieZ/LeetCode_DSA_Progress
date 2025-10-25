class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>vowel;map<char,int>cons;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' ){
                vowel[s[i]]+=1;
            }
            else{
                cons[s[i]]+=1;
            }
        }
        int x=0;int y=0;
        for(auto &i:vowel){
            x=max(x,i.second);
        }
        for(auto&j:cons){
            y=max(y,j.second);
        }
        
        int sum=x+y;
        return sum;
    }
};
