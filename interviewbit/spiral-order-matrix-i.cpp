// https://www.interviewbit.com/problems/spiral-order-matrix-i/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> spiralOrder(const vector<vector<int>> &A);
    
};

vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int m = (int) A.size(); //rows in matrix
    int n = (int) A[0].size(); //cols in matrix
     
    vector<int> res; // output vector
    if (m == 0) return res;
    
    int k = 0; //start row index
    int l = 0; // start col index
    
    while (k < m and l < n) {
        // get the first row from remaining rows
        for (int i = l; i < n; ++i) {
           res.push_back(A[k][i]);
        }
        ++k;

        // get the last col from remaining columns
        for (int i = k; i < m; ++i) {
            res.push_back(A[i][n - 1]);
        }
        --n;

        // get the last row from the remaining rows
        if (k < m) {
            for (int i = n - 1; i >= l; --i) {
                res.push_back(A[m - 1][i]);
            }
            --m;
        }

        // get the first col from remaining cols
        if (l < n) {
            for (int i = m - 1; i >= k; --i) {
                res.push_back(A[i][l]);
            }
            l++;
        }
    }
    return res;
}
