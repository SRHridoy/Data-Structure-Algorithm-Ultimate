#include<bits/stdc++.h>
using namespace std;

//Problem : Reverse all the elements of the given array.
void reverseArray(int arr[], int n){
    
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

int32_t main(){
    int arr[] = {10,20,30,45,60,80,90};
    int n = sizeof(arr)/sizeof(int);

    cout << "BEFORE:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    reverseArray(arr,n);
    cout << "AFTER: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;


}