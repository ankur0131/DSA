class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans="";
        string word="";
        for(int i=0;i<s.size();i++){
             
            if(s[i]==' '){
                
                reverse(word.begin(),word.end());
                
                ans+=word;
                if(word!=""){
                    ans+=' ';
                }
                word="";
            }else{
                word+=s[i];
            }
                
            
        }
      
        reverse(word.begin(),word.end());
        
        ans+=word;
        int n=ans.size()-1;
        if(ans[n]==' ')ans.pop_back();
        return ans;
    }
};