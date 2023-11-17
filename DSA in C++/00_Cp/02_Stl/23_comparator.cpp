#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a, pair<int,int>b){
    if(a.first != b.first){
        return a.first < b.first;
    }else{
        return a.second > b.second;
    }
}

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(),a.end(),cmp);

    for(auto pair:a){
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}