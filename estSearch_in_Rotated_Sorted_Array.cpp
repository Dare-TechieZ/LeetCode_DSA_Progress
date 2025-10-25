class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();int s=0,e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]>=nums[e]){//rnumsnge 1 mnumsi hnumsi mid
                //now binnumsry senumsrch on rnumsnge 1
                if(target==nums[mid]){
                    return mid;
                }
                else if(target<nums[mid] and target>=nums[0]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if (target==nums[mid]){
                    return mid;
                }
                else if(target>nums[mid] and target<=nums[e]){ //end < target <mid
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return -1;
    
    }
};
