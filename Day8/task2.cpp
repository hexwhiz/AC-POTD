#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int len;
        cin>>len;
        int k=0;
        for(int j=1;j<=len;j++){
            int temp;
            cin>>temp;
            if(abs(temp-j)!=0){
                int a=abs(temp-j);
                while(a!=0){
                    int temp2=a;
                    a=k%a;
                    k=temp2;
                }
            }
        }
        cout<<k<<"\n";
    }
    return 0;
}