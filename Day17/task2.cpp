#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid;
        int ans=nums.size();
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};

int main(){

    Solution obj;
    string input;
    getline(cin,input);
    istringstream str( input);
    int temp;
    vector<int> v;
    while( str>> temp){
        v.push_back( temp);
    }
    int target;
    cin>> target;
    cout<< obj.searchInsert( v, target);

    return 0;
}