#include<bits/stdc++.h>
using namespace std;

const int N = 13+10;
vector<pair<int,int>>graph[N];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;
        
        graph[v1].push_back({v2, wt});
        graph[v2].push_back({v1, wt});
    }
}
//limitations : 
//i, j connected? i, j > wt ? 
//All these O(N) operation....