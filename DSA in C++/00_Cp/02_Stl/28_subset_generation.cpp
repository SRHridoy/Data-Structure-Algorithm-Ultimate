#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>subsets;
void generateSubset(vector<int>&subset,int i, 
vector<int>nums){
    //Base condition : 
    if(i == nums.size()){
        subsets.push_back(subset);
        return;
    }

    //ith element not in subset:
    generateSubset(subset, i+1, nums);
    //ith element in subset:
    subset.push_back(nums[i]);
    generateSubset(subset, i+1, nums);
    subset.pop_back();
}

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<int>empty;
    generateSubset(empty, 0, v);
    for(auto &subset:subsets){
        for(auto &value:subset){
            cout << value << " ";
        }cout << endl;
    }
    
}