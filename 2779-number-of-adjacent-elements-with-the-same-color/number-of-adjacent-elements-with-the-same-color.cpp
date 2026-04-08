class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        vector<int> arr(n,0);
        vector<int> ans;
        int cnt=0;
       for(auto it:queries){
            int index = it[0];
            int color = it[1];

            if(arr[index]!=0){
                if(index>0 && arr[index]==arr[index-1])cnt--;
                if(index<n-1 && arr[index]==arr[index+1])cnt--;
            }

            arr[index]=color;

            if(index>0 && arr[index]==arr[index-1])cnt++;
            if(index<n-1 && arr[index]==arr[index+1])cnt++;

            ans.push_back(cnt);

       }
       return ans;
    }
};