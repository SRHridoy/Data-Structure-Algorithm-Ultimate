//Given N strings, present or not...
// N <= 10^5
//|S| <= 100

#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string>s;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        string str;
        cin >> str;
        s.insert(str);
    }

    int q;
    cin >> q;
    while(q--){
        string str;
        if(s.find(str)==s.end()){
            cout << "Absent" << endl;
        }else{
            cout << "Present" << endl;
        }
    }
    return 0;
}
