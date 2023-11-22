#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>graph[N];
bool vis[N];
//O(v+2e)...
void dfs(int vertex){
/* Take action on vertex after entering the vertex */
//if(vis[vertex]) return; //this can be written if inside for we havent written vis child condn
    cout << "Vertex  = " << vertex << endl;
    vis[vertex] = true;
    for(int child:graph[vertex]){
//Take action on child before entering the child node
        cout << "Par = " << vertex << "\t" << " child = " << child << endl; 
        if(vis[child]==true) continue;
        dfs(child);
//Take action on child after exittig child node
    }
//Take action on vertex before exiting the vertex...
}

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1);
    return 0;
}