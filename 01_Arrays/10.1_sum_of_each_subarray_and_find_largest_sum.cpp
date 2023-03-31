#include<bits/stdc++.h>
using namespace std;

//Problem : Find the sum of each subarray and find the largest of the sums...

void findLargestSubArraySum(int *arr, int n){
    int sum = 0;
    int maxiSum = INT_MIN;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            for(int k = i; k<=j; k++){
                cout << arr[k] << ",";
                sum +=arr[k];
            }
            cout << endl;
            cout << "SUB_ARRAY_SUM = " << sum << endl;
            if(maxiSum<sum){
                maxiSum = sum;
            }
            sum = 0;
            cout << endl;
        }
    }
    cout << "MAX_SUM_OF_SUB_ARRAY_IS = " << maxiSum << endl;
}

int32_t main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);

    findLargestSubArraySum(arr,n);
}