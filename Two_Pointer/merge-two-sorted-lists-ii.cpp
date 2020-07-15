// https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void merge(vector<int>&, vector<int>&);
};

void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    A.insert(A.end(), B.begin(), B.end());
    sort(A.begin(), A.end());
}
