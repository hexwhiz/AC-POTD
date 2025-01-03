//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        sort( arr.begin(), arr.end());
        sort( dep.begin(), dep.end());
        int max_platforms = 0;
        for( int i = 0; i < arr.size(); ++i){
            int low = 0;
            int high = arr.size() - 1;
            int ans = 0;
            while( low <= high){
                int mid = ( low + high) / 2;
                if( dep[ mid] >= arr[ i]){
                    ans = mid;
                     high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
            max_platforms = max( max_platforms, i - ans + 1);
        }
        return max_platforms;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, dep;
        string input;

        // Read first array (arr)
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Read second array (dep)
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            dep.push_back(number);
        }

        // Assuming Solution class is defined elsewhere with a method findPlatform
        Solution ob;
        cout << ob.findPlatform(arr, dep);

        cout << endl;
        cout << "~\n";
    }
    return 0;
}