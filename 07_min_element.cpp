#include<bits/stdc++.h>
using namespace std;

int min_element(int *arr, int n){
    int max = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]<max){
            max = arr[i];
        }
    }
    return max;
}

int32_t main(){

    int arr[] = {1,24, 5, 6, 62 ,22, 4};
    int size = sizeof(arr)/sizeof(int);
    int mini = min_element(arr, size);
    cout << "MIN element : " << mini << endl;

}