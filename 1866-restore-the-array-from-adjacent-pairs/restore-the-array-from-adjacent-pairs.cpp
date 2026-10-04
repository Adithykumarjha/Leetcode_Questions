class Solution {
public:
    vector<int>res;

    void dfs(int u, int prev, unordered_map<int, vector<int>>&adj){

        res.push_back(u);
        for(int &v : adj[u]){
            if(v!=prev){
                dfs(v,u,adj);
            }
        }
    }



    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,vector<int>>adj;

        for(vector<int> &vec : adjacentPairs){
            int u = vec[0];
            int v = vec[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int start = -1;

        for(auto &it : adj){
            if(it.second.size()==1){
                start = it.first;
                break;
            }
        }

        dfs(start, INT_MIN, adj);

        return res;
    }
};