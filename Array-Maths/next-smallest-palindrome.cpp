// https://www.interviewbit.com/problems/next-smallest-palindrome/

/*
Problem Description

Given a numeric string A representing a large number you need to find the next smallest palindrome greater than this number.


Problem Constraints

1 <= |A| <= 100

A doesn't start with zeroes and always contain digits from 0-9.



Input Format

First and only argument is an string A.


Output Format

Return a numeric string denoting the next smallest palindrome greater than A.


Example Input

Input 1:

 A = "23545"

Input 2:

 A = "999"



Example Output

Output 1:

 "23632"

Output 2:

 "1001"

*/

#include <bits/stdc++.h>
using namespace std;

bool all_9(string S) {
    for (auto s: S)
        if (s != '9')
            return false;
    return true;
}

void nextPermutation(string& S, int N) {
   int mid = N / 2;
   bool l_small = false;
   int L = mid - 1;
   int R = (N & 1) ? mid + 1 : mid;
   while (L >= 0 and S[L] == S[R]) {
       --L;
       ++R;
    }
    if (L < 0 or S[L] < S[R]) {
        l_small = true;
    }
    while (L >= 0) {
        S[R] = S[L];
        ++R; --L;
    }
    if(l_small) {
        int carry = 1;
        L = mid - 1;
        if (N & 1 == 1) {
            int num = S[mid] - '0' + carry;
            carry = num / 10;
            S[mid] = (num % 10) + '0';
            R = mid + 1;
        } else R = mid;
        while (L >= 0) {
            int num = S[L] - '0' + carry;
            carry = num / 10;
            S[L] = (num % 10) + '0';
            S[R++] = S[L--];
        }
    }
}

string solve(string A) {
    int N = (int)A.length();
    if (all_9(A)) {
        string res = "";
        res.push_back('1');
        for (int i = 1; i < N; i++) {
            res.push_back('0');
        }
        res.push_back('1');
        return res;
    } 
    nextPermutation(A, N);
    return A;
}
