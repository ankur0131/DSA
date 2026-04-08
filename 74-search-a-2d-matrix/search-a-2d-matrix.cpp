class Solution {
public:
    bool bs(int low,int high,int m,vector<vector<int>> &matrix,int target){
        if(low>high)return false;
        int mid = low+(high-low)/2;
        int i=mid/m;
        int j=mid%m;
        if(matrix[i][j]==target){
            return true;
        }else if(target<matrix[i][j]){
            return bs(low,mid-1,m,matrix,target);
        }else{
            return bs(mid+1,high,m,matrix,target);
        }

         
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
    
       return bs(0,n*m-1,m,matrix,target);
    }
};