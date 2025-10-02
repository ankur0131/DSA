class Solution {
    void solve(int index,vector<int> candidates,int target,vector<vector<int>>& ans,vector<int>& output){
        if(target==0){
            ans.push_back(output);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1])continue;
            if(candidates[i]>target)break;
            output.push_back(candidates[i]);
            solve(i+1,candidates,target-candidates[i],ans,output);
            output.pop_back();
        }
    }
 
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
         vector<vector<int>> ans;
          vector<int> output;
          solve(0,candidates,target,ans,output);
          return ans;

      
    }
};