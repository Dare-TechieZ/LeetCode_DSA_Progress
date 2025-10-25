class Solution {
public:
    bool isPalindrome(long long int x) {
        long long int num=x, rev=0,digit;
        while(num>0){
            digit=num%10;
            rev=rev*10+digit;
            num=num/10;
        }
        if(rev==x){
            return true;
        }
        else{
            return false;
        }
    }
};
