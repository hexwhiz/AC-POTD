#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_index = 0;
        int col_index = matrix[ 0].size() - 1;

        while( row_index < matrix.size() && col_index >= 0){
            if( matrix[ row_index][ col_index] == target){
                return true;
            }else if( matrix[ row_index][ col_index] < target){
                ++row_index;
            }else{
                --col_index;
            }
        }
        return false;
    }
};

int main(){

    Solution obj;
    vector< vector< int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout<<obj.searchMatrix(matrix,5);

    return 0;
}