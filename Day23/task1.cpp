//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int required( vector<int>& arr, int mid){
        int painters = 1;
        int sum = 0;
        for( int i = 0; i < arr.size(); i++){
            if( sum + arr[ i] > mid){
                sum = arr[ i];
                painters++;
            }else sum += arr[ i];
        }
        return painters;
    }
    int minTime(vector<int>& arr, int k) {
        int low = arr[ 0];
        int high = arr[ 0];
        for( int i = 1; i < arr.size(); i++){
            high += arr[ i];
            if( low < arr[ i]) low = arr[ i];
        }
        int ans = 0;
        while( low <= high){
            int mid = ( low + high) / 2;
            if( required( arr, mid) <= k){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution obj;
        cout << obj.minTime(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends