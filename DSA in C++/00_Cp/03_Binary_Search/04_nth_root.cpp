#include<bits/stdc++.h>
using namespace std;
#define eps 1e-5

double multiply(double mid, int n){
    double ans = 1;
    for(int i = 0; i < n; i++){
        ans *= mid;
    }
    return ans;
}
//for mth root of number N with d decimal accuracy:
//Time Complexity = m*log(N*(10^d))
int main(){
    double x;
    int n;
    cin >> x >> n;
    double lo = 1, hi = x, mid;
    while(hi - lo > eps){
        mid = (hi + lo)/2;
        if(multiply(mid, n) < x){
            lo = mid;
        }else{
            hi = mid;
        }
    }

    cout << fixed << setprecision(3) << lo << endl;
    //same...any of one ...
    cout << fixed << setprecision(3) << hi << endl;

    return 0;
}