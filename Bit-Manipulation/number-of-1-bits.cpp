// https://www.interviewbit.com/problems/number-of-1-bits/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int numSetBits(unsigned int);
};

int Solution::numSetBits(unsigned int A) {
    int ones = 0;
    while (A != 0) {
        A = A & (A - 1);
        ++ones;
    }
    return ones;

    // return __builtin_popcount(A); this can be done using builtin function
}
