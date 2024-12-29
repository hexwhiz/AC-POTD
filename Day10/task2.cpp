#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int max_num=0;
        for(int i=0;i<n.length();i++){
            if(max_num<n[i]-'0')
                max_num=n[i]-'0';
        }
        return max_num;
    }
};

int main(){

    Solution obj;
    cout<<obj.minPartitions("87654");

    return 0;
}