#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector<int> size;
    unsigned long long temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        int x=1;
        while(temp%(x+1)==0){
            ++x;
        }
        size.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<size[i]<<"\n";
    }

    return 0;
}