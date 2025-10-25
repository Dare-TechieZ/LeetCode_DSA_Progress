class Solution {
public:
    int ans=0;
    int reverse(int x) {
        if(x==0) return x;int digit;
        while(x!=0){
            if ((ans > (INT_MAX - abs(x%10))/10) || (ans < (INT_MIN + abs(x%10))/10)) { return 0; }
            ans=ans*10+x%10;
            x=x/10;
        }
        return ans;
    }
//WHY RETURNING 0 IF NUM EXCEEDS MAX/MIN LIMIT?
    /*The condition does not return 0 because the number is "too big" — 
    it returns 0 because the problem requires it.
    The check is not about the final number being too big—
    it's about preventing the overflow that would lead to an incorrect result. 
    Returning 0 is the only correct output for overflow cases.*/

//WHY DIVIDING BY 10?
    /*Algebraic Rearrangement:
    Start with the overflow condition:
        ans * 10 + digit > INT_MAX
    Rearrange to isolate ans:
        ans * 10 > INT_MAX - digit
        ans > (INT_MAX - digit) / 10
    Since digit can be negative (handled via abs(digit)), we use:
        ans > (INT_MAX - abs(digit)) / 10*/
};
