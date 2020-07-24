// https://www.interviewbit.com/problems/rearrange-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void arrange(vector<int>&);
};

void Solution::arrange(vector<int>& A) {
    int N = (int)A.size();
    for (int i = 0; i < N; i++)
        A[i] += (A[A[i]] % N) * N;

    for (int i = 0; i < N; i++)
        A[i] /= N;
}
