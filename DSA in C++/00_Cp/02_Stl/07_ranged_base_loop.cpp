#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2 ,3 ,4, 5};

//Copy hoi:
    for(int value : v){
        value++;
        //cout << value << " ";
    }
    for(int value : v){
        cout << value << " ";
    }//Output will be 1 2 3 4 5 doesn't change because copy hoi...

    //To get actual values : we simply use : 
    vector<int>v2 = {22, 22, 33, 33};
    for(int &value:v2){
        value++;
    }
    for(int value:v2){
        cout << value << " ";
    }cout << endl;

    //vector_of_pair:
    vector<pair<int,int>>v_p= {{1,2},{3, 4}, {3, 2}};
    // for(pair<int,int>&value:v_p){
    //     cout << value.first<< " " << value.second << endl;
    // }cout << endl;

    //Auto : 
    for(auto &value:v_p){
        cout << value.first << " " << value.second << endl;
    }cout << endl;

    return 0;
}