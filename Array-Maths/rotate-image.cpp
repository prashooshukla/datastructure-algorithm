// https://leetcode.com/problems/rotate-image/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix);
};

void Solution::rotate(vector<vector<int>>& matrix) {
    int N = matrix.size();
    // transponse the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i < j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    // reverse each row using two pointers technique
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            swap(matrix[i][j], matrix[i][N - 1 - j]);
        }
    }
}