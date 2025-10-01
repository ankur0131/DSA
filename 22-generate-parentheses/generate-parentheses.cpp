class Solution {
    void solve(int open ,int close,string current,vector<string>& ans ){
        if(open==0 && close==0){
            ans.push_back(current);
            return;
        }
        if(open>0){
            solve(open-1,close,current + "(",ans);
        }
        if(close>open){
            solve(open,close-1,current + ")",ans);
        }
    }
    
    
public:
    vector<string> generateParenthesis(int n) {
       vector<string> ans;
       solve(n,n,"",ans);
       return ans;

    }
};