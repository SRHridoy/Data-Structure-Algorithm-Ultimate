#include<iostream>
using namespace std;

int main(){
//TYPECASTING IN C: 
//bool->char->int->double Data loss hobe nah...
    int a = 65;
    char c = 'd';
    cout << c << endl;
    c = a;
    cout  << c << endl;
    cout << a << endl;

    return 0;
}