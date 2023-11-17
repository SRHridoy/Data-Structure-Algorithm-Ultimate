#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int>v(5,2);
//Sort:
    sort(a,a+n);
//for Vector:
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }cout << endl;

    return 0;
}