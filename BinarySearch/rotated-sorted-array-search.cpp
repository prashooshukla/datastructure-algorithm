// https://www.interviewbit.com/problems/rotated-sorted-array-search/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    private:
        int binary_search(const vector<int>&, int, int, int);
    public:
        int search(const vector<int>&, int);
};

int Solution::search(const vector<int> &A, int B) {
    int N = (int) A.size();
    return binary_search(A, B, 0, N - 1);
}

int Solution::binary_search(const vector<int> &A, int B, int L, int R) {
    if (L > R) return -1;
    int mid = L + (R - L) / 2;
    if (A[mid] == B) return mid;
    if (A[L] <= A[mid]) {
        if (B >= A[L] and B <= A[mid]) 
            return binary_search(A, B, L, mid - 1);
        return binary_search(A, B, mid + 1, R);
    }
    if (B >= A[mid] and B <= A[R])
        return binary_search(A, B, mid + 1, R);
    return binary_search(A, B, L, mid - 1);
}

