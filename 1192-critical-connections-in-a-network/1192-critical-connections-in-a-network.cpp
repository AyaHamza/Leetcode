
class Solution {
public:
    int dfn[100005],lowlink[100005],ndfn=0;
    vector<int>adj[100005];
            vector<vector<int>>ans;
   void Tarjan(int node,int par){

        lowlink[node]=dfn[node]=ndfn++;
        for(int i=0;i<adj[node].size();i++){
            int ch=adj[node][i];
            if(dfn[ch]==-1){
                Tarjan(ch,node);
                lowlink[node]=min(lowlink[node],lowlink[ch]);
            }
            else if(ch!=par)
                lowlink[node]=min(lowlink[node],dfn[ch]);
        }
        if(lowlink[node]==dfn[node]&&par!=-1)
            ans.push_back({par,node});
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
    
        for(int i=0;i<connections.size();i++)
            adj[connections[i][0]].push_back(connections[i][1]),adj[connections[i][1]].push_back(connections[i][0]);
        memset(dfn,-1,sizeof (dfn));
        for(int i=0;i<=n;i++)
            lowlink[i]=INT_MAX;
       Tarjan(0,-1);
        return ans;
    }
};