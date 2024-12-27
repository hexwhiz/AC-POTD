#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n){
        bool result=false;
        while(true){
            if((int)log10(n)==0){
                if(n==1||n==7){
                    result=true;
                }
                break;
            }
            int sum=0;
            while(n!=0){
                sum+=(n%10)*(n%10);
                n/=10;
            }
            n=sum;
        }
        return result;
    }
};

int main(){

    Solution obj;
    int n;
    cin>>n;
    cout<<obj.isHappy(n);

    return 0;
}