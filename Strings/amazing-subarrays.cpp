// https://www.interviewbit.com/problems/amazing-subarrays/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int solve(string);
    private:
        bool isVowel(char);
};

int Solution::solve(string A) {
    int ans = 0;
    int MOD = 10003;
    int N = (int) A.length();
    for (int i = 0; i < N; i++) {
        if (isVowel(A[i])) {
            ans += (N - i);
            ans %= MOD;
        }
    }
    return ans;
}

bool Solution::isVowel(char C) {
    C = tolower(C);
    if (C == 'a' or C == 'e' or C == 'i' or C == 'o' or C == 'u')
        return true;
    return false;
}
