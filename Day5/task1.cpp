#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0;
        int j=0;
        int count=0;
        while(i<g.size()&&j<s.size()){
            if(s[j]>=g[i]){
                ++count;
                ++i;
            }
            ++j;
        }
        return count;
    }
};


// driver code
int main(){
    Solution obj;
    vector<int> g;
    vector<int> s;
    string input;
    getline(cin,input);
    istringstream str1(input);
    int temp;
    while(str1>>temp){
        g.push_back(temp);
    }
    getline(cin,input);
    istringstream str2(input);
    while(str2>>temp){
        s.push_back(temp);
    }
    cout<<obj.findContentChildren(g,s);

    return 0;
}