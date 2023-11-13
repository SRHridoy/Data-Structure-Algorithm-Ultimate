#include<bits/stdc++.h>
using namespace std;

void INSERTION_SORT(int arr[], int n){
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }else{
                break;
            }
        }
    }
}

int main(){
    int arr[1000];
    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    cout << "Enter the Elements of the array : " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    INSERTION_SORT(arr, n);
    cout << "After Insertion Sort : " << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}