class Solution {
   bool solve(int row , int col,int index,vector<vector<char>>& board,string s,int n,int m){
        if (index==s.size()){
            return true;
        }
        if(  row < 0 || col < 0 || row >= n || col >= m){
            return false;
        }
        if (board[row][col] != s[index]) return false;
        char temp = board[row][col];
        board[row][col] = '#';  // mark visited
        int top = solve(row-1,col,index+1,board, s,n,m);
        int bottom = solve(row+1,col,index+1,board,  s,n,m);
        int left = solve(row,col-1,index+1,board,  s,n,m);
        int right =solve(row,col+1,index+1,board,  s,n,m);
        board[row][col] = temp; // backtrack
        return top||bottom||left||right;
    }
 
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        int index=0;
        for(int i = 0; i< n; i++){
            for(int j =0; j<m ;j++){
                if(board[i][j]==word[index]){
                     if(solve(i,j,index,board,word,n,m)){
                        return true;
                     }
                }
                
            }
        }
        return false;
    }
};