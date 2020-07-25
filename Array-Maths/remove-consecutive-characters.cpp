// https://www.interviewbit.com/problems/remove-consecutive-characters/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string solve(string, int);
    string to(char);
};

string Solution::solve(string A, int B) {
    int N = (int)A.length();
    string op = "";
    string tmp = to(A[0]);
    int count = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] == A[i - 1]) {
            tmp += A[i];
            ++count;
        } else {
            if (count != B) {
                op.append(tmp);
            }
            tmp = to(A[i]);
            count = 1;
        }
    }
    if (count != B) {
        op.append(tmp);
    }
    return op;
}

string Solution::to(char c) {
    string s(1, c);
    return s;
}