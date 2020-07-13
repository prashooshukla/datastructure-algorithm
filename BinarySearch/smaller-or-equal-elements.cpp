/* Problem Description

Given an sorted array A of size N. Find number of elements which are less than or equal to B.

NOTE: Expected Time Complexity O(log N)

Example Input
Input 1:

 A = [1, 3, 4, 4, 6]
 B = 4

Input 2:

 A = [1, 2, 5, 5]
 B = 3

Example Output
Output 1: 4

Output 2: 2

 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int solve(vector<int>&, int);
};

int Solution::solve(vector<int> &A, int B) {
    auto pos = upper_bound(A.begin(), A.end(), B);
    return pos - A.begin();
}
