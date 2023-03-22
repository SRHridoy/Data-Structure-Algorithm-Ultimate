#include<iostream>
using namespace std;
//O(N)
int linear_search(int arr[], int n, int key){

    for(int i = 0; i < n; i++){
        //Check if current element matches with the key
        if(arr[i] == key){
            return i;
        }
    }
    //out of the loop
    return -1;

}

int main(){

    int arr[] = {10, 15, 12, 9, 6, 4, 3 , 10, 9};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin >> key;
    
    int index = linear_search(arr, n, key);
    if(index!=-1){
        cout << key << " is present ar index " << index << endl;
    }else{
        cout << key << " is not present" << endl;
    }

    return 0;
}