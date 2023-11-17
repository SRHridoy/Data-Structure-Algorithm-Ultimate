#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        multiset<long long>bags;
        for(int i = 0; i < n; i++){
            long long candy;
            cin >> candy;
            bags.insert(candy);
        }
        long long total_candies = 0;
        for(int i = 0; i < k; i++){
            auto last_it = --bags.end();
            long long candy = *last_it;
            total_candies += candy;
            bags.erase(last_it);
            bags.insert(candy/2);
        }
        cout << total_candies << endl;
    }
    return 0;
}