#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {2, 3, 1, 6, 7, 6};

    //min-max element in vector:
    int min = *min_element(v.begin() + 3, v.end());
    int max = *max_element(v.begin(), v.end());
    cout << min << " " << max << endl;

    //accumulate:
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;

    //count:
    int cnt = count(v.begin(), v.end(), 6);
    cout << cnt << endl;

    //find:
    int element = *find(v.begin(), v.end(), 2);

    auto it = find(v.begin(), v.end(), 3);
    if(it!=v.end()){
        cout << *it << endl;
    }else{
        cout << "NOT FOUND" << endl;
    }

    //Reverse: 
    reverse(v.begin(), v.end());
    reverse(v.begin()+3, v.end());

    
    


    return 0;
}