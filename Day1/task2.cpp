#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int gcd(int a, int b) {
        if(a==0)
            return b;
        else
            return gcd(b%a,a);
    }
};

int main(){

    Solution obj;
    cout<<obj.gcd(375,60);  

    return 0;
}