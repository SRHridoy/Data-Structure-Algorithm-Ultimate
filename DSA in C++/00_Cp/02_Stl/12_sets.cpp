#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string>s;
    s.insert("abc");//O(log(n))
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
//find:
    // auto it = s.find("abc");
    // if(it!=s.end()){
    //     cout << (*it);
    // }

//Erase : 
    //same...


    for(auto &value:s){
        cout << value << " ";
    }cout << endl;
    
    return 0;
}