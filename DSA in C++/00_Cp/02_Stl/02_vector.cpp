#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>v){
    cout << "Size : " << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;
}

int main(){
    vector<int>v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        printVec(v);
        v.push_back(x);
    }
    printVec(v);


    vector<int>v1(6);
    v1.push_back(44);
    //0 0 0 0 0 44
    printVec(v1);

    vector<int>v2(5, 3);
    //3 3 3 3 3
    printVec(v2);
    v2.pop_back();
    //3 3 3 3
    printVec(v2);

    //Coping vector: 
    vector<int> v3 = v2;//O(n)

    //Pass by reference :
    vector<int> &v4 = v3;


    return 0;
}