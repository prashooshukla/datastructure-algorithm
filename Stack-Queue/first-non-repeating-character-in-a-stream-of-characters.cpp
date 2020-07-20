// https://www.interviewbit.com/problems/first-non-repeating-character-in-a-stream-of-characters/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string solve(string);
};

string Solution::solve(string A) {
    string ans = "";
    queue<char> Q;
    int count[26] = {0};
    int N = (int) A.length();
    for (int i = 0; i < N; i++) {
        Q.push(A[i]);
        count[A[i] - 'a']++;
        while(!Q.empty()) {
            if (count[Q.front() - 'a'] > 1) {
                Q.pop();
            } else {
                ans += Q.front();
                break;
            }
        }
        if (Q.empty()) {
            ans += '#';
        }
    }
    return ans;
}
