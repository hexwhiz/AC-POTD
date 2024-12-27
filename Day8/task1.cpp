#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size()!=m*n){
            return {};
        }
        vector<vector<int>> result(m,vector<int>(n));
        int row=0;
        int col=0;
        for(int i=0;i<original.size();i++){
            if(col==n){
                row++;
                col=0;
            }
            result[row][col]=original[i];
            col++;
        }
        return result;
    }
};

// driver code
int main(){

    Solution obj;
    vector<int> one_d;
    string input;
    getline(cin,input);
    istringstream str(input);
    int temp;
    while(str>>temp){
        one_d.push_back(temp);
    }
    int m,n;
    cin>>m>>n;
    vector<vector<int>> two_d=obj.construct2DArray(one_d,m,n);

    for(auto arr:two_d){
        for(auto i:arr){
            cout<<i<<" ";
        }
        cout<<"\n";
    } 


    return 0;
}