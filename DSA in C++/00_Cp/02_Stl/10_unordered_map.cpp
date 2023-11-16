#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, string>um;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        string y;
        cin >> y;
        //um.insert({x,y});
        um[x] = y;//O(1)
    }
//Random Order : 
    for(auto &value:um){
        cout << value.first << " " << value.second << endl;
    }

    auto it = um.find(3);//O(1)
    if(it!=um.end()){
        cout << (*it).first << " " << (*it).second << endl;
    }

//pair, vector esob use kora jabe nah...

    return 0;
}