#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isThree(int n) {
        int count=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                if(i*i!=n)
                    count+=2;
                else
                    count+=1;
            }
        }
        return count==3;
    }
};

int main(){

    Solution obj;
    int n;
    cin>>n;
    cout<<obj.isThree(n);

    return 0;
}