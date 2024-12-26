#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int m=bank[0].length();
        int lasers=0;
        int last_num=0;
        for(int i=0;i<n;i++){
            int cur_num=0;
            for(int j=0;j<m;j++){
                cur_num+=bank[i][j]-'0';
            }
            if(cur_num){
                lasers+=last_num*cur_num;
                last_num=cur_num;
            }
        }
        return lasers;
    }
};

// driver code
int main(){
    
    Solution obj;
    vector<string> bank;
    string temp;
    while(cin>>temp){
        bank.push_back(temp);
    }
    cout<<obj.numberOfBeams(bank);
    return 0;
}