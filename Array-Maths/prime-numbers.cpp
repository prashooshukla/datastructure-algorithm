// https://www.interviewbit.com/problems/prime-numbers/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> sieve(int);
        bool isPrime(int);
};

vector<int> Solution::sieve(int A) {
    vector<int> ans;
    if (A < 2) return ans;
    for (int i = 2; i <= A; ++i) {
        if (isPrime(i)) {
            ans.push_back(i);
        }
    }
    return ans;
}

bool Solution::isPrime(int A) {
    if (A <= 1) return false;
    if (A <= 3) return true;
    if (A % 2 == 0 or A % 3 == 0)
        return false;
    for (int i = 5; i * i <= A; i += 6) {
        if (A % i == 0 or A % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}