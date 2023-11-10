#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Before Rotation = ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    
    for (int i = 1; i < n; i++)
        swap(arr[0],arr[i]);

    cout << "After Rotation = ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    
    return 0;
}