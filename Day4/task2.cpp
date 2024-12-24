#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=0;
    string s="";
    cin>>n>>s;
    if(n<26){
        cout<<"NO";
        return 0;
    }
    unordered_set<char> unset;
    for(int i=0;i<n;++i){
        if(unset.find(s[i])==unset.end()){
            unset.insert((s[i]%'a')%'A'+'a');
        }
    }
    if(unset.size()==26)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}