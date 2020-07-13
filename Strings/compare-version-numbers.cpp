// https://www.interviewbit.com/problems/compare-version-numbers/

#include <bits/stdc++.h>
using namespace std;
class Solution {
    public: 
        int    compareVersion(string, string);
};

int Solution::compareVersion(string A, string B) {
    int N1 = (int) A.length();
    int N2 = (int) B.length();
    int i = 0, j = 0;
    while (i < N1 or j < N2) {
        unsigned long long num1 = 0, num2 = 0;
        while (i < N1 and A[i] != '.') {
            num1 += (num1 * 10) + (A[i] - '0');
            i++;
        }
        while (j < N2 and B[j] != '.') {
            num2 += (num2 * 10) + (B[j] - '0');
            j++;
        }
        i++;
        j++;
        if (num1 > num2) return 1;
        if (num1 < num2) return -1;
    }
    return 0;
}
