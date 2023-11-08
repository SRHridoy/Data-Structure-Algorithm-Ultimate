#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int last = 0, prev = 1, curr = 0;
    if (n==1){
        cout << last << endl;
    }
    else if(n==2){
        cout << prev << endl;
    }else{
        cout << last << "\t" << prev << "\t";
        for (int i = 2; i < n; i++)
        {
            curr = last + prev;
            last = prev;
            prev = curr;
            cout << curr << "\t";
        }
        
    }
    
    return 0;
}