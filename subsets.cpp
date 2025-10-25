class Solution {
public:
    vector<vector<int>>allsubsets;
    void generate(vector<int>&subset,int i,vector<int>&nums){
        if(i==nums.size()){
            allsubsets.push_back(subset);
            //at the end push_back all subsets into 2d vector
            return;
        }
        generate(subset,i+1,nums);//ith ele not in subset
        subset.push_back(nums[i]);
        generate(subset,i+1,nums);
        subset.pop_back();//backtracking
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>empty;
        generate(empty,0,nums);
        //return result;
        return allsubsets;
    }
};
