#include<bits/stdc++.h>
using namespace std;

int max_element(int *arr, int n){
    int max = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int32_t main(){

    int arr[] = {1,24, 5, 6, 62 ,22, 4};
    int size = sizeof(arr)/sizeof(int);
    int maxi = max_element(arr, size);
    cout << "MAX element : " << maxi << endl;

}