#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[6] = {1, 3, 4, 2, 4, 5};
    for(int i = 0; i < 6; i++)      
        cout << arr1[i] << " ";
    cout << endl;   
//Output : 1 3 4 2 4 5 

    int arr2[] = {1, 3, 4, 2, 5, 55};
    for (int i = 0; i < sizeof(arr2)/sizeof(int); i++)
        cout << arr2[i] << " ";
//Output : 1 3 4 2 5 55
    cout << endl;

    int arr3[5] = {0};
    for (int i = 0; i < 5; i++)
        cout << arr3[i] << " ";
//Outpur : 0 0 0 0 0

    cout << endl;
    
    int arr4[5] = {2};
    for (int i = 0; i < 5; i++)
        cout << arr4[i] << " ";
//Outpur : 2 0 0 0 0

    cout << endl;

    int arr5[5];
    for(int i = 0; i < 5; i++)
        cin >> arr5[i];
//Input...
    for(int i = 0; i < 5; i++)
        cout << arr5[i] << " ";
//Output...

    cout << endl;

    int size;
    cin >> size;
    // int arr[size]; Not recommended..
    int arr[10000];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
    cout << endl;
    cout << sizeof(arr);//4 * 10000 = 40000

    return 0;
}