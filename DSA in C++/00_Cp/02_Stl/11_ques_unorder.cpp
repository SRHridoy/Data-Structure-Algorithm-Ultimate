//Given N strings, print unique strings  with their frequency...
// N <= 10^5
//|S| <= 100

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    unordered_map<string,int>m;
    cin >> N;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        m[s]++;
    }
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        cout << m[s] << endl;
    }
    
    return 0;
}