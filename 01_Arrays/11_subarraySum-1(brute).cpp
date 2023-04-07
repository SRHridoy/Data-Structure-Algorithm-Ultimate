#include<bits/stdc++.h>
using namespace std;

//Problem : Print all subarrays of a given array
//Brute Force Approach O(N^3)
int largestSubarraySum1(int arr[], int n){

    int largest_sum = 0;

    for(int i=0; i<n; i++){
        for(int j = i; j<n; j++){

            int subarraysum = 0;

            for(int k = i; k<=j; k++){
                //cout << arr[k] << ",";
                subarraysum +=arr[k];
            }
            //cout << endl;
            //put a check is subarraySum > largest_sum
            largest_sum = max(largest_sum,subarraysum);
        }
    }
    return largest_sum;
}

//Find out the largest sum of subarray




int32_t main(){
    //Array Containing:
    int arr [] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);

    cout << largestSubarraySum1(arr, n);
}