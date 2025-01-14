//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int required(double d, vector<int> &stations, int k){
        int used = 0;
        for( int i = 1; i < stations.size(); i++){
            double diff = stations[ i] - stations[ i - 1];
            while( diff > d){
                used++;
                diff -= d;
            }
        }
        return used;
    }
    double findSmallestMaxDist(vector<int> &stations, int k) {
        int max_el = 0;
        for( int i = 1; i < stations.size(); i++){
            max_el = max( max_el, stations[ i] - stations[ i - 1]);
        }
        double low = 0;
        double high = max_el;
        while( high - low >= 1e-7){
            double mid = ( low + high) / 2;
            int req = required( mid, stations, k);
            if( k < req){
                low = mid;
            }else high = mid;
        }
        return high;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }
        int k;
        cin >> k;
        Solution obj;
        cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k)
             << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends