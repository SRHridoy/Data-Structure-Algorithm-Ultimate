//Given N strings, print unique strings in lexiographical order...
// N <= 10^5
//|S| <= 100

#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string>s;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        s.insert(str);
    }

    for(auto &value:s){
        cout << value << endl;
    }
    return 0;
}
