class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        for(int i=0;i<s.size();i++){
             vector<char> mp(256,0);
             for(int j=i;j<s.size();j++){
                if(mp[s[j]]==1){
                    break;
                }
                mp[s[j]]=1;
                int len=j-i+1;
                maxlen=max(len,maxlen);
             }
        }
        return maxlen;
    }
};