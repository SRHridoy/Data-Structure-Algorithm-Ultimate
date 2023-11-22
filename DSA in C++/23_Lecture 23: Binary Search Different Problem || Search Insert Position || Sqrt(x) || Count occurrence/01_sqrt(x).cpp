#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        int ans;
        int start = 1, end = x, mid;
        while(start<=end){
            mid = start + (end -start)/2;
            if(mid==x/mid){
                ans = mid;
                break;
            }else if(mid<x/mid){
                ans = mid;
                start = mid + 1;
            }else{
                end =mid -1;
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    double ans = s.mySqrt(16);
    cout << ans << endl;
    return 0;
}