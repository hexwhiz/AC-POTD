#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
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
    cout<< obj.search( v, target);

    return 0;
}