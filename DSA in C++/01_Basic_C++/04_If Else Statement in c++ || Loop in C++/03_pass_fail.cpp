#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    if(marks>=33)
        cout << "Pass" << endl;
    else
        cout << "Fail" << endl;
    return 0;
}