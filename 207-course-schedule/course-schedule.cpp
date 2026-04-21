class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];

            adj[u].push_back(v);
        }
        vector<int> Deg(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(int j=0;j<adj[i].size();j++){
                Deg[adj[i][j]]++;
            }
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(Deg[i]==0){
                q.push(i);
            }
        }
        vector<int> ans;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(int i=0;i<adj[node].size();i++){
                Deg[adj[node][i]]--;
                if(Deg[adj[node][i]]==0){
                    q.push(adj[node][i]);
                }
            }
        }
        int count=ans.size();
        if(count==numCourses)return 1;
        else{
            return 0;
        }
    }
};