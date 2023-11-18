#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int i = 0;
    while(t--){
        int n;
        cin >> n;
        if((n+3)%3!=0){
            cout << "First" << endl;
        }else{
            cout << "Second" << endl;
        }
    }
    return 0;
}