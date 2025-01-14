//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    int required( vector< int>& stalls, int mid){
        int count = 1;
        int last = 0;
        int cur = 1;
        while( cur < stalls.size()){
            if( stalls[ cur] - stalls[ last] >= mid){
                last = cur;
                count++;
            }
            cur++;
        }
        return count;
    }

    int aggressiveCows(vector<int> &stalls, int k) {
        
        sort( stalls.begin(), stalls.end());
        int low = 1;
        int high = stalls[ stalls.size() - 1] - stalls[ 0];
        int ans = 0;
        while( low <= high){
            int mid = ( low + high) / 2;
            int req = required( stalls, mid);
            if( req >= k){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends