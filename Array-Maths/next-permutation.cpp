// https://www.interviewbit.com/problems/next-permutation/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> nextPermutation(vector<int>&);
};

vector<int> Solution::nextPermutation(vector<int> &A) {
    int i = A.size() - 1, k = i;
    while (i > 0 && A[i - 1] >= A[i])
        i--;
    for (int j = i; j < k; j++, k--)
        swap(A[j], A[k]);
    if (i > 0) {
        k = i--;
        while (A[k] <= A[i])
            k++;
        swap(A[i], A[k]);
    }
    return A;
}
