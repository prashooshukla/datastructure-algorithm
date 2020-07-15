// https://www.interviewbit.com/problems/single-number/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int singleNumber(const vector<int>&);
};

int Solution::singleNumber(const vector<int> &A) {
    // int N = (int) A.length();
    int num = 0;
    for (auto a: A) {
        num ^= a;
    }
    return num;
}
