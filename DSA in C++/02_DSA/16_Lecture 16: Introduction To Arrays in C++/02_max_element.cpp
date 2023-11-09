#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {2, 4, 44, 0, -22};
    int max = INT_MIN;
    for(int i = 0; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Max = " << max << endl;
    return 0;
}