//Given N strings, print unique strings in lexiographical order with their frequency...
// N <= 10^5
//|S| <= 100

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    map<string,int>m;
    cin >> N;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        m[s]++;
    }

    for(auto &value:m){
        cout << value.first << " " << value.second << endl;
    }
    return 0;
}