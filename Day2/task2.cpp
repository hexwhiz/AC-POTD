#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]%3!=0){
                count++;
            }
        }
        return count;
    }
};

int main(){

    vector<int> nums={1,2,3,4};
    Solution obj;
    cout<<obj.minimumOperations(nums);

    return 0;
}