#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        
        // create a sorted hash table of <value,index list> pair 
        map<int,vector<int>> hash;
        for(int i=0;i<n;i++){
            hash[nums[i]].push_back(i);
        }
        int count=0;

        // count the numbers smaller than current and save the count on all the
        // indices in the index list of a specific value
        for(auto p:hash){
            int i;
            for(i=0;i<p.second.size();i++){
                ans[p.second[i]]=count;
            }

            // count will increase n times for each value that is repeated n times
            count+=i;
        }
        return ans;
    }
};

int main(){

    vector<int> nums={8,1,2,2,3};
    Solution obj;
    vector<int> ans=obj.smallerNumbersThanCurrent(nums);

    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}