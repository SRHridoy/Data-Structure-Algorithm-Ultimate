#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<string>ms;
    ms.insert("abc");
    ms.insert("abc");
    ms.insert("abc");
    ms.insert("ddd");
    ms.insert("ddd");
    ms.insert("ddd");
    ms.insert("ddd");
    for(auto &value:ms){
        cout << value << " ";
    }cout << endl;
//O(log(n)):
    auto it = ms.find("abc");//first occurance khujbe pabe
    if(it!=ms.end()){
        ms.erase(it);//first occurance delete korbe only;
    }

    ms.erase("ddd");//All occurance delete korbe...



    return 0;
}