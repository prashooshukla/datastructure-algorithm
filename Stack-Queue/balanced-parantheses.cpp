// https://www.interviewbit.com/problems/balanced-parantheses/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int solve(string);
};

int Solution::solve(string A) {
    int N = (int) A.size();
    stack<char> S;
    for (int i = 0; i < N; i++) {
        if (S.empty() and A[i] == ')') return 0;
        if (A[i] == '(') S.push(A[i]);
        else S.pop();
    }
    
    return S.empty();
}
