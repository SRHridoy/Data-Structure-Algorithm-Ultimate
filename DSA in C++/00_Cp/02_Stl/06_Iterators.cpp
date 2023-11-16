#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2, 3, 4, 5};
    // vector<int>::iterator it = v.begin();
    // // cout << (*it) << endl;
    // // cout << (*(it+1)) << endl;
    // for(it = v.begin(); it!=v.end(); ++it){
    //     cout << (*it) << " ";
    // }cout << endl;

    //Iterator_pair to pair:
    vector<pair<int,int>>v_p = {{1,2}, {3,4}, {5,6}};
    vector<pair<int,int>>::iterator it;
    // for(it = v_p.begin(); it!=v_p.end(); ++it){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    for(it = v_p.begin(); it!=v_p.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}