class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cntL=0;
        int cntR=0;
        int cnt=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L'){
                cntL++;
            }
            else if(moves[i]=='R'){
                cntR++;
            }
            else if(moves[i]=='_'){
                cnt++;
            }
        }
        int s=abs(cntL-cntR);
        int ans=cnt+s;
        return ans;
        
    }
};