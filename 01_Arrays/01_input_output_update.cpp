#include<iostream>
using namespace std;

int main(){
    
    int marks[100] = {-1};

    int n;
    cout << "Enter the no of students ";
    cin >> n;

    //Assign a value
    marks[0] = -1;

    //INPUT
    for(int i=1; i<=n; i++){
        cin >> marks[i];
        
        marks[i] *= 2;
    }
    //OUTPUT
    for(int i=1; i<=100; i++){
        cout << marks[i] << " ,";
    }

    cout << endl;

    // int size;
    // cin >> size;
    // int arr[size];
    // for(int i=0; i<size;i++){
    //     cin >> arr[i];
    // }
    // for(int i=0; i<size; i++){
    //     cout << arr[i] << " ";
    // }


    return 0;
}