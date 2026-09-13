class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0)return 0;
        int maxi=1;
        int sum=1;
        for(int i=1;i<nums.size();i++){
            int x=nums[i]-nums[i-1];
            if(x==0)continue;

            if(x==1){
                sum++;
                
            }
            maxi=max(sum,maxi);
            if(x>1){
                sum=1;
            }
        }
        return maxi;
    }
};