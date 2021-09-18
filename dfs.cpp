#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void dfs(bool visited[],int dist[],vector<int> adj[],int source){
    visited[source] = true;
    for(auto x : adj[source]){
        if(visited[x]) continue;
        visited[x] = true;
        dist[x] = dist[source]+1;
        dfs(visited,dist,adj,x);
    }
}
void solve(){
    int n,m;
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool visited[n+1];
    int dist[n+1];
    memset(visited,false,sizeof visited);
    dist[1]=0;
    dfs(visited,dist,adj,1);
    for (int i = 1; i <= n; i++)
        cout << i << " --> " << dist[i] << "\n";
}
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}