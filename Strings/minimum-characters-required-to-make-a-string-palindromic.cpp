// https://www.interviewbit.com/problems/minimum-characters-required-to-make-a-string-palindromic/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int solve(string);
        vector<int> computeLPSArray(string);
};

vector<int> computeLPSArray(string str) { 
    int M = str.length(); 
    vector<int> lps(M); 
  
    int len = 0; 
    lps[0] = 0; // lps[0] is always 0 

    // the loop calculates lps[i] for i = 1 to M-1 
    int i = 1; 
    while (i < M) { 
        if (str[i] == str[len]) { 
            len++; 
            lps[i] = len; 
            i++; 
        } else { // (str[i] != str[len])  
            // This is tricky. Consider the example. 
            // AAACAAAA and i = 7. The idea is similar 
            // to search step. 
            if (len != 0) { 
                len = lps[len-1]; 
                // Also, note that we do not increment 
                // i here 
            } 
            else {// if (len == 0) 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 
    return lps; 
} 

int Solution::solve(string A) {
    string B = A;
    reverse(B.begin(), B.end());
    B = A + "$" + B;
    auto lps = computeLPSArray(B);
    return (A.length() - lps.back());
}
