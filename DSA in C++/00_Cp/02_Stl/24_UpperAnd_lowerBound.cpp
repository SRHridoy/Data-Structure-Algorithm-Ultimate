#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>a = {4, 5, 5, 7, 8 ,25};
    cout << endl;
    sort(a.begin(),a.end());

    for(auto &value:a){
        cout << value << " ";
    }cout << endl;

    auto it = lower_bound(a.begin(), a.end(), 5);// ans will be 5
    auto iit = lower_bound(a.begin()+3,a.end(),5);//ans will be 7
    auto iiit = lower_bound(a.begin(), a.end(), 26);//ans will be a.end()...

    auto ut = upper_bound(a.begin(), a.end(),5);// ans will be 7...
    auto uut = upper_bound(a.begin(), a.end(), 6);// ans will be 7...
    if(it==a.end()){
        cout << "NOT FOUND" << endl;
        return 0;
    }else{
        cout << (*it) << endl;
    }

    //for set:
    set<int>s = {4, 5, 55, 25, 7, 8};//set e automatic sort hoi...after sorting this will be 4 5 7 8 25 55
    auto st = s.lower_bound(26);//55
    auto ust = s.upper_bound(25);//55
    cout << (*st) << endl;
    cout << (*ust) << endl;

    return 0;
}