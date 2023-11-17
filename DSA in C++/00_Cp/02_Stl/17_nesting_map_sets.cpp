#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int>p1,p2;
    p1 = {1,2};
    p2 = {2, 3};
    cout << (p1 < p2) << endl;//1st ta check hobe..jodi same hoi taile porer ta compare hobe...

    map<set<int>,int>ms;
    set<int>s1 = {1, 2, 3};
    set<int>s2 = {2, 4};
    cout << (s1 < s2) << endl;

    set<pair<int,int>>st;

    map<pair<string,string>,vector<int>>mpv;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string fn, ln;
        int ct;
        cin >> fn >> ln >> ct;
        for(int j = 0; j < ct; j++){
            int x;
            cin >> x;
            mpv[{fn,ln}].push_back(x);
        }
    }

    for(auto &pr : mpv){
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << full_name.first << " " << full_name.second << " ";
        cout << list.size() << endl;
        for(auto &element : list){
            cout << element << " " << endl;
        }
    }

    return 0;
}