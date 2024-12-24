#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void sortColors(vector<int> &nums){
            int i = 0, k = 0, j = nums.size() - 1;
            while (k <= j){
                if (nums[k] == 2){
                    swap(nums[k], nums[j]);
                    j--;
                }else if (nums[k] == 0){
                    swap(nums[k], nums[i]);
                    i++;
                    k++;
                }else
                    k++;
            }
        }
};

int main()
{
    Solution obj;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> nums;
    int i;
    while(cin>>i){
        nums.push_back(i);
    }
    obj.sortColors(nums);
    for(int j:nums){
        cout<<j<<" ";
    }

    return 0;
}