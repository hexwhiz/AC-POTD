#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumMoves(string s) {
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='X'){
                count++;
                i+=2;
            }
        }
        return count;
    }
};

int main(){

    string s="XX0X000XX00X0";
    Solution obj;
    cout<<obj.minimumMoves(s);

    return 0;
}