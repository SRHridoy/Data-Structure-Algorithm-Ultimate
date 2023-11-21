#include<bits/stdc++.h>
using namespace std;

const int N = 13+10;
vector<int>graph[N];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int v1, v2, wt;
        cin >> v1 >> v2;
        
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    //O(N+M)
    //N != 10^5 or N <= 10^3, 
    //but edges must not exceed 
    //1e7...
    return 0;
}