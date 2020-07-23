// https://www.interviewbit.com/problems/rotate-matrix/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void rotate(vector<vector<int>>&);
};

void Solution::rotate(vector<vector<int>>& A) {
    int N = A.size();
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i < j) {
                swap(A[i][j], A[j][i]);
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            swap(A[i][j], A[i][N - 1 - j]);
        }
    }
}
