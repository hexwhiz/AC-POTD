#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int low = 1;
        int high = rows * cols;

        while( low <= high){
            int mid = ( low + high) / 2;
            int num = matrix[ ceil( static_cast<double>( mid) / cols) - 1]
            [ mid % cols == 0 ? cols - 1 : mid % cols - 1];

            if( num == target){
                return true;
            }else if( num > target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return false;
    }
};

int main(){

    Solution obj;
    vector< vector< int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<< obj.searchMatrix( matrix, 3);

    return 0;
}