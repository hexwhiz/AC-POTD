//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int required( vector< int>& arr, int mid){
        int count = 1;
        int sum = 0;
        for( int i = 0; i < arr.size(); i++){
            if( sum + arr[ i] > mid){
                sum = arr[ i];
                count++;
            }else sum += arr[ i];
        }
        return count;
    }
    int findPages(vector<int> &arr, int k) {
        if( arr.size() < k)
            return -1;
        int low = arr[ 0], high = arr[ 0];
        for( int i = 1; i < arr.size(); i++){
            high += arr[ i];
            if( low < arr[ i]) low = arr[ i];
        }
        int ans = -1;
        while( low <= high){
            int mid = ( low + high) / 2;
            int req = required( arr, mid);
            if( req <= k){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
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

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends