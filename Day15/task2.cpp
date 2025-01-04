#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.length();
        int a_turns = 0;
        int b_turns = 0;
        char cur = colors[0];
        int i = 0;
        int count = 0;
        while (i < colors.length()) {
            if (colors[i] == cur) {
                i++;
                count++;
            } else {
                cur = colors[i];
                if (cur == 'B' && count >= 3) {
                    a_turns += count - 2;
                } else if (cur == 'A' && count >= 3) {
                    b_turns += count - 2;
                }
                count = 0;
            }
        }
        if (cur == 'A' && count >= 3) {
            a_turns += count - 2;
        } else if (cur == 'B' && count >= 3) {
            b_turns += count - 2;
        }
        if (a_turns > b_turns)
            return true;
        else
            return false;
    }
};

int main(){

    Solution obj;
    string input;
    cin>> input;
    cout<< obj.winnerOfGame( input);

    return 0;
}