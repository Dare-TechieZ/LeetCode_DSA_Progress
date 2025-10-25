class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        map<int,int>map1;
        for(int i=0;i<nums.size();i++){
            int current=nums[i];
            map1[current]=i;
        }
        for(int i=0;i<nums.size();i++){
            int current=nums[i];
            int x=target-current;
            if(map1.count(x)==1 and map1[x]!=map1[current]){
                //cout<<current<<map1.count(current)<<" and "<<map1.count(x)<<endl;
                //cout<<map1[x]<<" & "<<map1[current]<<endl;
                ans[0]=map1[x];
                ans[1]=map1[current];
            }
            //cout<<current<<map1.count(current)<<" and "<<map1.count(x)<<endl;
        }
        return ans;
    }
};
