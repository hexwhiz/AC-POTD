#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin>> n>> k;
    
    int result = 0;
    int k_score = 0;

    for( int i = 1; i <= n; i++){
        int temp;
        cin>> temp;
        if( i == k){
            k_score = temp;
        }
        if( temp != 0 && ( i <= k || temp == k_score)){
            result++;
        }
    }

    cout<< result;

    return 0;
}