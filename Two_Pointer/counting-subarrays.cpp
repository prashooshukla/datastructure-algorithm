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
        if (sum < B) {
            end++;

            if (end >= start)
                count += end - start;

            if (end < N)
                sum += A[end];
        } else {
            sum -= A[start];
            start++;
        }
    }

    return count;
}
