#define a nums1
#define b nums2
class Solution {
public:
    double findMedianSortedArrays(vector<int>&a,vector<int>&b){
        int n=a.size();
        int m=b.size();
        if(n>m){ return findMedianSortedArrays(b,a);}//maintains a as smaller array
        int s=0,e=n;
        while(s<=e){
            //condition of balance:a_left<=b_right and b_left<a_right 
            int mid1=(s+e)/2;
            int mid2=(n+m+1)/2-mid1;//total-mid1,total mai +1 isliye hai taki odd even dono case handle ho jaye
            double a_left=(mid1-1)>=0?a[mid1-1]:INT_MIN;//if mid1-1 exists so a_left ko value de di, nahi toh comparison rukna nahi chahiye even if i take no element from A,for this a_left=mid1-1
            double a_right=(mid1<n)?a[mid1]:INT_MAX;
            double b_left=(mid2-1)>=0?b[mid2-1]:INT_MIN;
            double b_right=(mid2<m)?b[mid2]:INT_MAX;
            if(b_left<=a_right and a_left<=b_right){
                //condition balanced,now we have to check if (n+m) is odd/even
                if((n+m)%2) return max(a_left,b_left);
                else return (max(a_left,b_left)+min(a_right,b_right))/2;
            }
            else{//condition not balanced
                if(a_left>b_right){
                    e=mid1-1;
                }
                else{
                    s=mid1+1;
                }
            }
        }
        return -1;
    }

};
