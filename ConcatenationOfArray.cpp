class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(2*n,-1);
        for(int i=0;i<2*n;i++){
            ans.push_back(nums[i%n]);
        }
        
        remove(ans.begin(),ans.end(),-1);
        for(int i=0;i<2*n;i++){
            ans.pop_back();
        }
        return ans;
    }
};
