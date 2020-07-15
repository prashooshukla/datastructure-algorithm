// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>&);
};

int Solution::removeDuplicates(vector<int> &A) {
    set<int> S(A.begin(), A.end());
    A.clear();
    copy(S.begin(), S.end(), back_inserter(A));
    return A.size();
}
