// https://www.interviewbit.com/problems/counting-subarrays/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int solve(vector<int>&, int);
};

int Solution::solve(vector<int>& A, int B) {
    int N = (int)A.size();
    int start = 0, end = 0, count = 0, sum = A[0];

    while (start < N && end < N) {

        // If sum is less than k,
        // move end by one position.
        // Update count and sum
        // accordingly.
        if (sum < B) {
            end++;

            if (end >= start)
                count += end - start;

            // For last element,
            // end may become n
            if (end < N)
                sum += A[end];
        }

        // If sum is greater than or
        // equal to k, subtract
        // arr[start] from sum and
        // decrease sliding window by
        // moving start by one position
        else {
            sum -= A[start];
            start++;
        }
    }

    return count;
}
