#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,string>p;
    //p = make_pair(2, "abc");
    p = {2, "abc"};
    cout << p.first << " " << p.second<< endl;

    pair<int, string>&p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second<< endl; 
    cout << p1.first << " " << p1.second<< endl; 

    pair<int, string>p2 = p;
    p2.first = 5;
    cout << p.first << " " << p.second<< endl; 
    cout << p2.first << " " << p2.second<< endl;
    return 0;
}