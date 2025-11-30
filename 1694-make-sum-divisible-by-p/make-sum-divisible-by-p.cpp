class Solution {
     
public:
    int minSubarray(vector<int>& nums, int p) {
         long long total=0;
         for(int i =0; i<nums.size();i++){
            total+=nums[i];
         }
         if(total%p==0){
            return 0;
         }
         int r=total%p;
         long long prefix=0;
         int ans = nums.size();
         map<long long,int> mp;
         mp[0]=-1;
         for(int i =0;i<nums.size();i++){
            prefix = (prefix + nums[i])%p;
            int need=(prefix-r+p)%p;
            if(mp.find(need)!=mp.end()){
                ans = min(ans,i-mp[need]);
            }
            mp[prefix]=i;
         }
         if(ans==nums.size()){
            return -1;
         }
         else{
            return ans;
         }
    
        
    }
};