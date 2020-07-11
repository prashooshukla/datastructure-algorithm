// https://www.interviewbit.com/problems/count-element-occurence/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findCount(const vector<int>&, int);
};

int Solution::findCount(const vector<int> &A, int B) {
    auto low = lower_bound(A.begin(), A.end(), B); 
    if (low == A.end() || *low != B) 
        return 0; 
    auto high = upper_bound(low, A.end(), B);      
    return high - low; 
}
