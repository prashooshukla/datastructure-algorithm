// https://www.interviewbit.com/problems/pair-with-given-difference/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int solve(vector<int>&, int);
};

int Solution::solve(vector<int> &A, int B) {
    int N = (int) A.size();
    int i = 0;
    int j = 1;
    sort(A.begin(), A.end());
    while (i < N and j < N) {
        if (i != j and A[j] - A[i] == B) return 1;
        else if (A[j] - A[i] < B) j++;
        else i++;
    }
    return 0;
}
