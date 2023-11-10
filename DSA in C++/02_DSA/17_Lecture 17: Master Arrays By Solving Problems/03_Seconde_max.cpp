#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = { 2, 3, 4, 55, 222, 100};
    int max1 = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        max1 = max(max1, arr[i]);
    }
    cout << "1st Max element = " << max1 << endl;

    int max2 = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        if(arr[i]!=max1){
            max2 = max(max2, arr[i]);
        }
    }
    cout << "2nd Max element = " << max2 << endl;
//1st Max element = 222
//2nd Max element = 100
    return 0;
}