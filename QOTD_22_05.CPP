class Solution {
    public:
    int dfs(int node,int par,vector<vector<int>>&adj){
        int temp=(adj[node].size()>1?1:0);
        for(auto chld:adj[node]){
            if(chld==par) continue;
            temp+=dfs(chld,node,adj);
        }
        return temp;
    }
    int solve(int N, vector<int> p){
        // code here
        vector<vector<int>>adj(N);
        for(int i=1;i<N;i++){
            adj[i].push_back(p[i]);
            adj[p[i]].push_back(i);
        }
        // adjacency list created
        int ctr=0;
        for(int i=1;i<N;i++){
            // cout << i << " "<<adj[i].size() << endl;
            if(adj[i].size()>adj[ctr].size()) ctr=i;
        }
        // found centre of star. center is
        // the node with maximum number
        // of adjacent nodes
        int ans=0;
        for(auto x:adj[ctr]){
            if(adj[x].size()>1){
                ans+=dfs(x,ctr,adj);
                // cout<<x<<" "<<ans<<endl;
            }
        }
        return ans;
    }
};
