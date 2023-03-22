#include<iostream>
using namespace std;
//Works if the array is sorted.

//Time Complexity---->log2(N)
int binary_search(int arr[], int n, int key){
    //Implement binary search
    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = (start+end)/2;
        
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid] > key){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    //this is that
    return -1;

}

int main(){

    int arr[] = {10, 20, 30, 40, 45, 60,70, 89};
    int n = sizeof(arr)/sizeof(int);

    int key;
    cin >> key;
    
    int index = binary_search(arr, n, key);
    if(index!=-1){
        cout << key << " is present ar index " << index << endl;
    }else{
        cout << key << " is not present" << endl;
    }

//test
}