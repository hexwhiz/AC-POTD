#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=1;
        int high=0;
        for(int i=0;i<weights.size();i++){
            high+=weights[i];
            if(weights[i]>low)low=weights[i];
        }
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            int cur_index=0;
            int weight=0;
            int day_count=1;
            while(cur_index<weights.size()){
                weight+=weights[cur_index];
                if(cur_index<weights.size()-1&&weight+weights[cur_index+1]>mid){
                    day_count++;
                    weight=0;
                }
                cur_index++;
            }
            if(day_count<=days){
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
    vector< int> nums = {1,2,3,4,5,6,7,8,9,10};
    cout<< obj.shipWithinDays( nums, 5);

    return 0;
}