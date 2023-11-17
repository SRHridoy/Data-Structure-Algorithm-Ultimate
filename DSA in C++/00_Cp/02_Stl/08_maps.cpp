#include<bits/stdc++.h>
using namespace std;


void print(map<int, string> &m){
    cout << "Size : " << m.size() << endl; 
//O(nlog(n)
        for(auto &value:m){
            cout << value.first << " " << value.second << endl;
        }
    }

int main(){
    map<int, string>m;
    m[1] = "abc";//O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m[6];//o(log(n))
    m[5] = "ccc";
    m.insert({4, "afg"});
    // map<int,string>::iterator it;
    // for(it = m.begin(); it!=m.end(); it++){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }



// Find :Returns iterator,  if can't find return m.end().
    auto it = m.find(5);//O(log(n))
    if(it==m.end()){
        cout << "NO value"  << endl;
    }else{ 
        cout << (*it).first << " " << (*it).second << endl;
    }
    print(m);

//Erase : Iterator o key value as parameter...
    m.erase(3);//O(log(n))
    if(it!=m.end())
        m.erase(it);//Ekhane emon it dia jabe nah jeta exist kore nah tai check kora lage safety check.
    print(m);

    m.clear();
    print(m);
    
    
    return 0;
}