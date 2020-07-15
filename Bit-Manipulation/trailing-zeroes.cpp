// https://www.interviewbit.com/problems/trailing-zeroes/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int solve(int);
};

int Solution::solve(int A) {
    int count = 0;
    while ((A & 1) == 0) {
        A = A >> 1;
        count++;
    }
    return count;
}
// O(1) solution
// int x = A ^ (A - 1);
// return __builtin_popcount(x) - 1;