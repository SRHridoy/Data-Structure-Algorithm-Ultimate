#include<bits/stdc++.h>
using namespace std;

int BINARY_SEARCH(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[1000];
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the array elements : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the value you want to search : ";
    cin >> key;
    int index = BINARY_SEARCH(arr, n, key);
    cout << key << " is found at = " << index << endl;

    return 0;
}