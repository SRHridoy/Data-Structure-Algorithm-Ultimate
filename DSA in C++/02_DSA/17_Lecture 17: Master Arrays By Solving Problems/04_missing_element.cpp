// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N-1];
    int sum = 0;
    for (int i = 0; i < N-1; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }

    int sumN = N*(N+1)/2;

    cout << "Missing Number is = " << sumN - sum << endl;
    
    return 0;
}
