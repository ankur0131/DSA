class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN;
        int sum=0;
        int minus=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)minus=0;
            else{
                ans=max(ans,nums[i]);
            }
        }
        if(minus==0){
            for(int i=0;i<nums.size();i++){
                sum+=nums[i];
                ans=max(ans,sum);
                if(sum<0){
                    sum=0;
                }
            }
        }
        return ans;
    }
};