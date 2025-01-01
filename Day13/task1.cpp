#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline( vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> row_max( n);
        vector<int> col_max( n);
        int result = 0;

        for( int i = 0; i < n; i++){
            int temp = 0;
            for( int j = 0; j < n; j++){
                temp = max( temp, grid[ i][ j]);
            }
            row_max[ i] = temp;
        }

        for( int i = 0; i < n; i++){
            int temp = 0;
            for( int j = 0; j < n; j++){
                temp = max( temp, grid[ j][ i]);
            }
            col_max[ i] = temp;
        }

        for( int i = 0; i < n; i++){
            for( int j = 0; j < n; j++){
                result += min( row_max[ i], col_max[ j]) - grid[ i][ j];
            }
        }
        return result;
    }
};

int main(){

    Solution obj;

    vector<vector<int>> grid={
        { 3, 0, 8, 4},
        { 2, 4, 5, 7},
        { 9, 2, 6, 3},
        { 0, 3, 1, 0}
    };

    cout<< obj.maxIncreaseKeepingSkyline( grid);

    return 0;
}