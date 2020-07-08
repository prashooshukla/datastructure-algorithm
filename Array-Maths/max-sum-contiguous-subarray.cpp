// https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxSubArray(const vector<int>&);
};

int Solution::maxSubArray(const vector<int> &A) {
    int N = (int) A.size();
    int max_sum = A[0];
    int curr_sum = A[0];
    for (int i = 1; i < N; i++) {
        curr_sum = max(A[i], curr_sum + A[i]);
        max_sum = max(curr_sum, max_sum);
    }
    return max_sum;
}
