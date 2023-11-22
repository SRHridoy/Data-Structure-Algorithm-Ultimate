#include<bits/stdc++.h>
using namespace std;
int findMinimumOperations(string s1, string s2, string s3) {
    int cnt = 0;
    int size = s1.size() + s2.size() + s3.size();
    int miniSize = min(s1.size(), min(s2.size(), s3.size()));
    if(s1[0] != s2[0] || s2[0] != s3[0]){
        return -1;
    }
    // Check if all three strings are identical
    if (s1 == s2 && s2 == s3) {
        return 0;
    }

    int i = 0;
    while (i < miniSize && s1[i] == s2[i] && s2[i] == s3[i]) {
        cnt++;
        i++;
    }

    //cout << size << " " << cnt << endl;
    return size - cnt * 3;
}
int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int op = findMinimumOperations( s1,s2,s3);
    cout << op << endl;
    return 0;
}