class Solution {
public:
    int findmax(vector<vector<int>> &mat,int &mid){
        int maxi=INT_MIN;
        int index=0;
        for(int i=0;i<mat.size();i++){
            if(maxi<mat[i][mid]){
                maxi=max(maxi,mat[i][mid]);
                index=i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        int low=0;
        int high=m-1;
        while(low<m && high>=0){
            int mid=low+(high-low)/2;
            int row=findmax(mat,mid);
            int left=-1;
            if(mid-1>=0){
                left=mat[row][mid-1];
            }
            int right=-1;
            if(mid+1<=m-1){
                right=mat[row][mid+1];
            }
            if(mat[row][mid]>left && mat[row][mid]>right)return {row,mid};
            else if(left>mat[row][mid] ){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return {-1,-1};
    }
};