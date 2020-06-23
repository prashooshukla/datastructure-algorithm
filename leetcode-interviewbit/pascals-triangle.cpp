// https://leetcode.com/problems/pascals-triangle

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> result;
        for (int line = 1; line <= numRows; line++) {
	        long long c = 1;
            vector<int> tmp;
	        for (int i = 1; i <= line; i++) {
	            tmp.push_back(c);
	            c = c * (line - i) / i;
	        }
	        result.push_back(tmp);
	    }
        return result;
    }
};