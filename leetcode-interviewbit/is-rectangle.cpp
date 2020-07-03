// https://www.interviewbit.com/problems/is-rectangle/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int solve(int, int, int, int);
};

int Solution::solve(int A, int B, int C, int D) {
    unordered_map<int, int> mp;
    mp[A]++;
    mp[B]++;
    mp[C]++;
    mp[D]++;
    if (mp.size() == 1) return 1; // if all size are equal
    if (mp.size() == 2) {
        if (mp.begin() -> second == 2) return 1;
    }
    return 0;
}
