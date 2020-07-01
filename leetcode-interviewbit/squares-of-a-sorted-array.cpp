// https://leetcode.com/problems/squares-of-a-sorted-array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {

        // this solution uses O(N) time and O(N) extra Space
        int N = (int) A.size();
        int L = 0;
        int R = N - 1;
        vector<int> res(N);
        for (int k = N - 1; k >= 0; k--) {
            if (abs(A[L]) > abs(A[R])) {
                res[k] = A[L] * A[L];
                ++L;
            } else {
                res[k] = A[R] * A[R];
                --R;
            }
        }
        return res;

        // This solution used O(log N) time and O(1) extra space
        // for (int i = 0; i < A.size(); i++) {
        //     A[i] *= A[i];
        // }
        // sort(A.begin(), A.end());
        // return A;
    }
};