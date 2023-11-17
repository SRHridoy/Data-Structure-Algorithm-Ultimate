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
//Related data presentation : 
    pair<int,int>p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0], p_array[2]);
    for(int i = 0; i<3; i++){
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    pair<int, string>pin;
    cin >> pin.first >> pin.second;
    cout << pin.first << " " << pin.second << endl;
    return 0;
}