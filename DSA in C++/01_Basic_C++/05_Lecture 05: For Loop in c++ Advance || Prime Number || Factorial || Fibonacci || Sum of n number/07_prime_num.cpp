#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if(n<2){
        cout << "Not Prime" << endl;
        return 0;
    }
    else{
        for (int i = 2; i < n; i++)
        {
            if(n%2==0){
                cout << "Not Prime" << endl;
                return 0;
            }
        }
        cout << "Prime" << endl;
    }
    return 0;
}