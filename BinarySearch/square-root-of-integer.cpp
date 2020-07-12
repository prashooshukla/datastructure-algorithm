// https://www.interviewbit.com/problems/square-root-of-integer/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int sqrt(int);
};

int Solution::sqrt(int x) {
    if (x == 0)
        return 0;
    int left = 1, right = INT_MAX;
    while (true) {
        int mid = left + (right - left) / 2;
        if (mid > x / mid) {
            right = mid - 1;
        } else {
            if (mid + 1 > x / (mid + 1))
                return mid;
            left = mid + 1;
        }
    }
}
