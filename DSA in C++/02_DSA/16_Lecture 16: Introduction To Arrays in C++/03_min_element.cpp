#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {2, 4, 44, 0, -22};
    int min = INT_MAX;
    for(int i = 0; i < 5; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Min = " << min << endl;
//Output : Min = -22
    return 0;
}