// https://www.interviewbit.com/problems/matrix-median/

/*
Given a matrix of integers A of size N x M in which each row is sorted.

Find an return the overall median of the matrix A.

Input Format

The first and only argument given is the integer matrix A.

Output Format

Return the overall median of the matrix A.

Constraints

1 <= N, M <= 10^5
1 <= N*M  <= 10^6
1 <= A[i] <= 10^9
N*M is odd

For Example

Input 1:
    A = [   [1, 3, 5],
            [2, 6, 9],
            [3, 6, 9]   ]
Output 1:
    5
Explanation 1:
    A = [1, 2, 3, 3, 5, 6, 6, 9, 9]
    Median is 5. So, we return 5.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findMedian(vector<vector<int>>&);
};

int Solution::findMedian(vector<vector<int>> &A) {
    int R = A.size(); // total rows
    int C = A[0].size(); // total cols
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < R; i++) {
        mini = min(mini, A[i][0]);
        maxi = max(maxi, A[i][C - 1]);
    }
    int expected = (R * C + 1) / 2;
    while (mini < maxi) {
        int mid = mini + (maxi - mini) / 2;
        int position = 0;
        for (int i = 0; i < R; i++) {
            position += upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin();
        }
        if (position < expected) {
            mini = mid + 1;
        } else {
            maxi = mid;
        }
    }
    return mini;
}
