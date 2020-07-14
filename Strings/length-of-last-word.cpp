// https://www.interviewbit.com/problems/length-of-last-word/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public: 
        int lengthOfLastWord(const string);
};

int Solution::lengthOfLastWord(const string A) {
    if (A.length() == 0) return 0; // for empty string input
    int N = (int) A.length();
    for (int i = N - 1; i >= 0; i--) {
        string temp = "";
        if (A[i] == ' ') { // discarding trailing spaces
            continue;
        }
        while (i >= 0 and A[i] != ' ') {
            temp.push_back(A[i]); // push_back for O(1) string insertion operation
            i--;
        }
        return temp.length(); // return length of string
    }
    return 0; // for safety if above loop doesn't execute
}
