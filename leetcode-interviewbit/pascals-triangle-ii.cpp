// https://leetcode.com/problems/pascals-triangle-ii

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int line = rowIndex + 1;
        long long c = 1;
        vector<int> res;
        for (int i = 1; i <= line; ++i) {
            res.push_back(c);
            c = c * (line - i) / i;
        }
        return res;
    }
};