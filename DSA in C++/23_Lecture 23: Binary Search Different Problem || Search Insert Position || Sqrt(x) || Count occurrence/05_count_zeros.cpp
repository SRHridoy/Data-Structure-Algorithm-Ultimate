#include<bits/stdc++.h>
using namespace std;

int countZeroes(int arr[], int n) {
    sort(arr,arr+n);
    int x = 0;
    //Finding 1st Occurance:
    int first = -1;
    int start = 0, end = n-1, mid;
    while(end>=start){
        mid = start + (end-start)/2;
        if(arr[mid]==x){
            first = mid;
            end = mid - 1;
        }else if(arr[mid]>x){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    if(first==-1){
        //cout << 0 << endl;
        return 0;
    }
    //Finding last Occurance:
    int last = -1;
    start = 0, end = n-1;
    while(end>=start){
        mid = start + (end-start)/2;
        if(arr[mid]==x){
            last = mid;
            start = mid + 1;
        }else if(arr[mid]>x){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return last - first + 1;
}

int main(){
    int arr[12] = {1,1,1,1,1,1,1,1,1,0,0,0};
    int zeros =  countZeroes(arr, 12);
    cout << zeros << endl;

    return 0;
}