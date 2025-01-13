#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_pile=0;
        for(int i=0;i<piles.size();i++){
            max_pile=max(max_pile,piles[i]);
        }
        // long sum=accumulate(piles.begin(),piles.end(),0l);
        int low=1;
        int high=max_pile;
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            long hours=0;
            for(int i=0;i<piles.size();i++){
                hours+=ceil((double)piles[i]/mid);
            }
            if(hours<=h){
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
    vector< int> nums = {3,6,7,11};
    cout<< obj.minEatingSpeed( nums, 8);

    return 0;
}