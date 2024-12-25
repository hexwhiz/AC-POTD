#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n>>k;
    int result=(sqrt(25+40*(240-k))-5)/10;
    if(result>n)
        cout<<n;
    else cout<<result;
    return 0;
}