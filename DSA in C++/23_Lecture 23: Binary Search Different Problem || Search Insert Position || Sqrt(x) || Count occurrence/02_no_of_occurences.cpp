#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    vector<int>v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    //Finding 1st Occurance:
    int first = -1;
    int start = 0, end = n-1, mid;
    while(end>=start){
        mid = start + (end-start)/2;
        if(v[mid]==x){
            first = mid;
            end = mid - 1;
        }else if(v[mid]>x){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    if(first==-1){
        cout << 0 << endl;
        return;
    }
    //Finding last Occurance:
    int last = -1;
    start = 0, end = n-1;
    while(end>=start){
        mid = start + (end-start)/2;
        if(v[mid]==x){
            last = mid;
            start = mid + 1;
        }else if(v[mid]>x){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    cout << last - first + 1;
    
    return 0;
}