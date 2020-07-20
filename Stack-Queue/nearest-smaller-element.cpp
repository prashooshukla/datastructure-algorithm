// https://www.interviewbit.com/problems/nearest-smaller-element/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> prevSmaller(vector<int>&);
};

vector<int> Solution::prevSmaller(vector<int>& A) {
    int N = (int)A.size();
    stack<int> S;
    vector<int> sol(N);
    for (int i = 0; i < N; i++) {
        while (!S.empty() and A[i] <= S.top())
            S.pop();
        if (S.empty())
            sol[i] = -1;
        else
            sol[i] = S.top();
        S.push(A[i]);
    }
    return sol;
}
