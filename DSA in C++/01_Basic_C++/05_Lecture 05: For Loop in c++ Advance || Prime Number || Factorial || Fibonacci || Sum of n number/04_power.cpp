#include<iostream>
using namespace std;

int main(){
    //5^4 = 5 x 5 x 5 x 5 
    int n, pow, i, num;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter the power : ";
    cin >> pow;

    num = n;
    for (int i = 1; i < pow; i++)
    {
        num = num * n;
    }
    cout << num << endl;
    return 0;
}