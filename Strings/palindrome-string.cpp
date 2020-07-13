// https://www.interviewbit.com/problems/palindrome-string/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int isPalindrome(string);
};

int Solution::isPalindrome(string A) {
    int N = (int) A.length();
    string B = "";
    for (int i = 0; i < N; i++) {
        if (isalpha(A[i]) or isdigit(A[i])) {
            B += tolower(A[i]);
        }
    }
    N = (int) B.length();
    int L = 0, R = N - 1;
    while (L <= R) {
        if (B[L++] != B[R--]) {
            return 0;
        }
    }
    return 1;
}
