//Starting with a 1-indexed array of zeroes and a list of operations, for each operation add a value to each the array element between two given indices. Once all operation have been performed, return the maximum value in the array.

#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int ar[N];
int main(){
    int n, m;
    cin >> n >> m;
    while(m--){
        int a, b, d;
        cin >> a >> b >> d;
        ar[a] += d;
        ar[b+1] -=d;
    }
    //presum:
    for(int i = 1; i <= n; i++){
        ar[i] += ar[i-1];
    }
    long long max = -1;
    for(int i = 1; i <=n; i++){
        if(max<ar[i]){
            max = ar[i];
        }
    }
    cout << max << endl;
    return 0;
}