// https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int coverPoints(vector<int> &A, vector<int> &B);
        int shortest(int x1, int x2, int y1, int y2);
};

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int steps_count = 0;
    for (int i = 0; i < A.size() - 1; ++i) {
        steps_count += shortest(A[i], A[i + 1], B[i], B[i + 1]);
    }
    return steps_count;
}

int Solution::shortest(int x1, int x2, int y1, int y2) {
    return max(abs(x1 - x2), abs(y1 - y2));
}