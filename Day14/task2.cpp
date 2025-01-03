#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio( 0);
    cin.tie( 0); cout.tie( 0);

    int k;
    cin>> k;

    for( int i = 0; i < k; i++){
        int n;
        cin>> n;
        long long ones = 0;
        long zeroes = 0;
        for( int j = 0; j < n; j++){
            int num;
            cin>> num;
            if( num == 1)
                ++ones;
            else if( num == 0){
                ++zeroes;
            }
        }
        cout<< ones * ( 1ll << zeroes)<< "\n";
    }

    return 0;
}