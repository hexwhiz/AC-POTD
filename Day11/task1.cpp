#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string::iterator iter=s.begin();
        string::iterator prev=s.begin();
        while(iter!=s.end()){
            if(*iter==' '&&iter==s.begin())
                s.erase(iter);
            else if(*iter==' '&&(*(iter+1)==' '||iter+1==s.end()))
                s.erase(iter);
            else if(*iter==' '){
                reverse(prev,iter);
                prev=iter+1;
                iter++;
            }else
                iter++;
        }
        reverse(prev,s.end());
        reverse(s.begin(),s.end());
        return s;
    }
};

int main(){

    Solution obj;
    string st="";
    getline(cin,st);
    cout<<obj.reverseWords(st);

    return 0;
}