// https://www.interviewbit.com/problems/noble-integer

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int solve(vector<int> &A);
};

int Solution::solve(vector<int> &A) {
    int n = A.size();
    sort(A.begin(), A.end());
    
    for (int i = 0; i < n - 1; i++) {
        if (A[i] == A[i + 1])
            continue;
        if (A[i] == (n - (i + 1))) {
            return 1;
        }
    }
    if (A[n - 1] == 0) return 1;
    return -1;
}
