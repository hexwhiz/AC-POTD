#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mid;
        int pivot=0;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]<nums[0]){
                pivot=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return nums[pivot];
    }
};

int main(){

    Solution obj;
    vector< int> nums = {3,4,5,1,2};
    cout<< obj.findMin( nums);
    return 0;
}