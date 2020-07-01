// https://www.interviewbit.com/problems/verify-prime/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int isPrime(int);
};

int Solution::isPrime(int A) {
    if (A <= 1) return 0;
    if (A <= 3) return 1;
    if (A % 2 == 0 or A % 3 == 0)
        return 0;
    for (int i = 5; i * i <= A; i += 6) {
        if (A % i == 0 or A % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}
