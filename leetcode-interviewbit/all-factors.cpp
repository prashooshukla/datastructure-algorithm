// https://www.interviewbit.com/problems/all-factors

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> allFactors(int A);
};

vector<int> Solution::allFactors(int A) {
    vector<int> ans;
    vector<int> oop;
    for (int i = 1; i <= sqrt(A); ++i) {
        if (A % i == 0) {
            if (A / i == i) {
                ans.push_back(i);
            } else {
                ans.push_back(i);
                oop.push_back(A / i);
            }
        }
    }
    for (int i = (int) oop.size() - 1; i >= 0; i--) {
        ans.push_back(oop[i]);
    }
    return ans;
}
