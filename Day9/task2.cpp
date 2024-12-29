#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int len;
        cin>>len;
        bool flag=0;
        long long sum=0;
        int count=0;
        for(int j=0;j<len;j++){
            int num;
            cin>>num;
            if(num>0){
                if(flag){
                flag=0;
                count++;
                }
                sum+=num;
            }else if(num<0){
                flag=1;
                sum+=-num;
            }
        }
        if(flag)
            count++;
        cout<<sum<<" "<<count<<"\n";
    }

    return 0;
}