#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num=0;
        for(int i:nums){
            num=num^i;
        }
        return num;
    }
};

int main(){

    vector<int> nums={4,6,2,3,6,2,4};
    Solution obj;
    cout<<obj.singleNumber(nums);  

    return 0;
}