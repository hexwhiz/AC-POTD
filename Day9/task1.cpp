#include<bits/stdc++.h>
using namespace std;

bool isPrime(int& num){
    for(int i=2;i*i<=num;i++){
        if(num%i==0)
            return false;
    }
    return true;
}

bool isAlmostPrime(int& num){
    int count=0;
    for(int i=2;i<=num/2;i++){
        if(isPrime(i)&&num%i==0){
            count++;
        }
    }
    if(count==2)
        return true;
    else
        return false;
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n;
    cin>>n;

    int count=0;

    for(int i=6;i<=n;i++){
        if(isAlmostPrime(i))
            count++;    
    }
    cout<<count;

    return 0;
}