#include<bits/stdc++.h>
using namespace std;

int main(){
    
//Lambda function :Used to shorten the code...
    cout << [](int x, int y){return x+y;}(2,4) << endl;

    auto sum =  [](int x, int y){return x+y;};
    cout << sum(2,3) << endl;

//all_of:
    vector<int>v = {2, 3, 5};
    cout << all_of(v.begin(), v.end(), [](int x){return x > 0;});//if all values satisfy the lambda function condition then return 1 else 0..

//any_of:if any satisfy then return 1...
    cout << any_of(v.begin(),v.end(),[](int x){return x>0;});

//none_of: inverse of all_of...
    cout << none_of(v.begin(), v.end(), [](int x){return x >0;});

    return 0;
}