class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int oper = 0;
        int s = nums.size();
        int sum = 0;
        for(int i =0 ; i < s ; i++){
            sum+=nums[i];
        }
        if(sum%k==0){
            return oper;
        }
        for(int i = 0 ; i < s; i++){
            while(nums[i]>0){
                nums[i]--;
                sum--;
                oper++;
                if(sum%k==0){
                    return oper;
                }
            }
        }
      
        return oper;
    }
};