// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int removeDuplicates(vector<int>&);
};

int Solution::removeDuplicates(vector<int>& A) {
    int i = 0;
    for (int n : A)
        if (i < 2 || n > A[i - 2])
            A[i++] = n;
    return i;
}
