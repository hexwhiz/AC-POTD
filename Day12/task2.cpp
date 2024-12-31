#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool flag=false;
        int cur=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(cur-i<=nums[i]){
                cur=i;
                if(i==0){
                    flag=true;
                }
            }
        }
        return flag;
    }
};

int main(){

    Solution obj;

    vector<int> nums;
    string input;
    getline(cin,input);
    istringstream str(input);
    int temp;
    while(str>>temp){
        nums.push_back(temp);
    }

    cout<<obj.canJump(nums);

    return 0;
}