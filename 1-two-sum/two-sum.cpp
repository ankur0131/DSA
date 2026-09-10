class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i,nums.size();i++){
            int a=target-nums[i];
            if(mp.find(a)!=mp.end()){
                return {i,mp[a]};
            }else{
                mp[nums[i]]=i;
            }
        }
        return {0,0};
    }
};