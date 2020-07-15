// https://www.interviewbit.com/problems/min-xor-value/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findMinXor(vector<int>&);
};

int Solution::findMinXor(vector<int> &A) {
    int N = (int) A.size();
    sort(A.begin(), A.end());
    int mini = INT_MAX;
    for (int i = 0; i < N - 1; i++) {
        mini = min(mini, A[i] ^ A[i + 1]);
    }
    return mini;
}
