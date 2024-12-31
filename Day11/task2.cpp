#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int shortest=strs[0].length();
        for(int i=0;i<strs.size();i++){
            shortest=min(shortest,(int)strs[i].length());
        }
        string result="";
        for(int i=0;i<shortest;i++){
            char temp=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(temp!=strs[j][i]){
                    return result;
                }
            }
            result+=temp;
        }
        return result;
    }
};

int main(){

    Solution obj;
    vector<string> arr={
        "flowing",
        "flower",
        "flying"
    };

    cout<<obj.longestCommonPrefix(arr);

    return 0;
}