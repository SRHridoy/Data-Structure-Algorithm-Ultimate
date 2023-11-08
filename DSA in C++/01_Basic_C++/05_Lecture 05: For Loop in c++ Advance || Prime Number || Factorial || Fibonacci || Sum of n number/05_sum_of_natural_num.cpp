#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum : " << sum << endl;
    // sum = (n*(n+1))/2
    return 0;
}