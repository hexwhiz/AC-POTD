#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length();
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=abs(s[i]-s[i+1]);
        }
        return sum;
    }
};

int main(){

    string st = "hello";
    Solution obj;
    cout<<obj.scoreOfString(st);

    return 0;
}