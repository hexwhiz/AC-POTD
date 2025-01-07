#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {

        // maths solution: O(1)
        // return ( sqrt(8ll * n + 1) - 1) / 2;

        // binary search: O(log n)
        int low = 1;
        int high = n;
        int ans;
        while( low <= high){
            long long mid = ( (long long)low + high) / 2;
            if( mid * (mid + 1) / 2 <= n){
                ans = (int)mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main(){

    Solution obj;
    int n;
    cin>> n;
    cout<< obj.arrangeCoins( n);

    return 0;
}