#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int N, int key){
    for(int i = 0; i < N; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 3;
    int index = linear_search(arr,5,3);
    cout << index << endl;
    return 0;
}