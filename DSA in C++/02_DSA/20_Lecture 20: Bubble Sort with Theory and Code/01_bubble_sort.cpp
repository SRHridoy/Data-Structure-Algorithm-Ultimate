#include<bits/stdc++.h>
using namespace std;

void BUBBLE_SORT(int arr[], int n){
    for(int i = n-2; i >= 0; i--){
        bool swapped = false;
        for(int j = 0; j <= i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}

int main(){
    int arr[1000];
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout <<endl << "After Sorting : " << endl;
    BUBBLE_SORT(arr, n);
    for(int i = 0 ; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}