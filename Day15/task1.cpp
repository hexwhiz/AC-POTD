#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int ones = 0;
        int n = boxes.length();
        vector<int> ans(n);
        for (int i = 0; i < n - 1; i++) {
            ones += boxes[i] - '0';
            ans[i + 1] = ans[i] + ones;
        }
        ones = boxes[n - 1] - '0';
        int rev_sum = 0;
        for (int i = n - 2; i >= 0; i--) {
            rev_sum += ones;
            ans[i] += rev_sum;
            ones += boxes[i] - '0';
        }
        return ans;
    }
};

int main(){

    Solution obj;
    string input;
    cin>> input;
    vector<int> ans = obj.minOperations(input);
    for( int i : ans){
        cout<< i<< " ";
    }

    return 0;
}