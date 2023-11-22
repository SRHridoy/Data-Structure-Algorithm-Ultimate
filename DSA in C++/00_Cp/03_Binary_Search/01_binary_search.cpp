#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
//O(log2(n))
    int to_find;
    cin >> to_find;
    int lo = 0, hi = n-1;
    int mid;
    while(hi-lo > 1){
        mid = (hi+lo)/2;
        if(v[mid]<to_find){//mid less so ans lie in greater than mid...
            lo = mid+1;
        }else{//here mid is greater or equals so ans can be mid or less...
            hi = mid;
        }
    }
    if(v[lo]==to_find){
        cout << lo << endl;
    }else if(v[hi] == to_find){
        cout << hi << endl;
    }else{
        cout << "Not found" << endl;
    }



    return 0;
}