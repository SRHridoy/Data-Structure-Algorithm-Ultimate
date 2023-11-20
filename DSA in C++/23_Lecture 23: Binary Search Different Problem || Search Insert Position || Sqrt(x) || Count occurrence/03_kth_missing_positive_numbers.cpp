#include<bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int size = arr[arr.size()-1] + k;
    vector<int>v(size,1);
    for(int i = 0; i < arr.size(); i++){
        v[arr[i]-1]=0;
    }
    // for(auto val:v){
    //     cout << val << " ";
    // }cout << endl;
    int cnt = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i]==1){
            cnt++;
            if(cnt==k){
                return i+1;
            }
        }
    }
    //return -1;
    }

int main(){
    vector<int>arr = {2, 3, 4, 7, 11};
    int index = findKthPositive(arr,4);
    cout << index << endl;
    return 0;
}