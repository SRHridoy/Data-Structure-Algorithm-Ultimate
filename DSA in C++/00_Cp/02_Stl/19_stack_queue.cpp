#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }

    queue<string>q;
    q.push("abc");
    q.push("gbc");
    q.push("ass");
    q.push("fsc");
    q.push("abc");

    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}