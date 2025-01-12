//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int nthRoot(int n, int m) {
        int low = 1;
        int high = m;
        int ans = -1;
        while( low<=high){
            int mid = ( low + high) / 2;
            if( ceil(pow(mid,n)) == m){
                return mid;
            }else if( ceil(pow(mid,n)) < m){
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
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends