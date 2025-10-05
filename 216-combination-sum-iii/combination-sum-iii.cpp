class Solution {
    void solve(int k , int n,vector<vector<int>>& ans ,  vector<int>& sub,int start){
        if(n==0){
            if(sub.size()==k){
                ans.push_back(sub);  
            }
            return;    
        }
        
             for(int i = start ; i<10; i++){
                sub.push_back(i);
                solve(k,n-i,ans,sub,i+1);
                sub.pop_back();
            }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> sub;
        solve(k,n,ans,sub,1);
        return ans;

    }
};