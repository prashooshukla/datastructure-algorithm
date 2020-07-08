// https://www.interviewbit.com/problems/palindrome-integer

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int isPalindrome(int);
};

int Solution::isPalindrome(int A) {
    int r = 0;
    int N = A;
    while (A > 0) {
        r *= 10;
        r += (A % 10);
        A /= 10;
    }
    return N == r;
}
