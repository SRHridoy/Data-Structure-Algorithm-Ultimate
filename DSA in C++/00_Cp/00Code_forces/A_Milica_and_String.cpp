#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int A = 0, B = 0;
        for(auto val:str){
            if(val=='A'){
                A++;
            }else{
                B++;
            }
        }
        if(k==B){
            cout << 0 << endl;
            return;
        }else if(k==0 && B==5){
            cout << 1 << endl << 1 << " " << A << endl;
        }else if(k==0 && B==0){
            cout << 0 << endl;
            return;
        }
        else{
            cout << 1 << endl;
            cout << abs()
        }
    }
    return 0;
}