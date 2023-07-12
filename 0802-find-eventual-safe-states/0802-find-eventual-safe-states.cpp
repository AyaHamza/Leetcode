class Solution {
public:
    int vis[10004];
    int get_safe_nodes(int node,vector<vector<int>>& graph){
        if(vis[node]==1) {
            vis[node]=0;
            return 0;
        }
        if (vis[node]!=-1) return vis[node];
        vis[node]=1;
        int c=1;
        for(int i=0;i<graph[node].size();i++)
            c=c&&get_safe_nodes(graph[node][i],graph);
        
        c==1?vis[node]=2:vis[node]=0;
        return vis[node];
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        memset(vis,-1,sizeof vis);
        for(int i=0;i<graph.size();i++){
            if(vis[i]==-1)
                get_safe_nodes(i,graph);
            if(vis[i]==2)
                ans.push_back(i);
        }
            
        return ans;
    }
};

// going to safe one  vis=2   
// goint to un safe one vis =0
// going to unsafe one vis=1








