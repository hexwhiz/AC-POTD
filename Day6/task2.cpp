#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int num;
    cin>>num;
    int result=0;
    int power_of_five=5;
    while(num>=power_of_five){
        result+=num/power_of_five;
        power_of_five*=5;
    }
    cout<<result;

    return 0;
}