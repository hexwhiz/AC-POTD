#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[low]==nums[mid]&&nums[high]==nums[mid]){
                low++;
                high--;
            }else if(nums[low]<=nums[mid]){
                if(nums[low]<=target&&nums[mid]>target){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                if(nums[high]>=target&&nums[mid]<target){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};

int main(){

    Solution obj;
    vector<int> nums = {2,5,6,0,0,1,2};
    cout<< obj.search( nums, 0);
    return 0;
}