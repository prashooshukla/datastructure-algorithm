// https://www.interviewbit.com/problems/maximum-ones-after-modification/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int solve(vector<int>&, int);
};

int Solution::solve(vector<int> &A, int B) {
    int N = (int) A.size();
    int count = 0; 
    int l = 0; 
    int max_len = 0; 
  
    // i decides current ending point 
    for (int i = 0; i < N; i++) { 
        if (A[i] == 0) 
            count++; 
  
        // If there are more 0's move 
        // left point for current ending 
        // point. 
        while (count > B) { 
            if (A[l] == 0) 
                count--; 
            l++; 
        } 
  
        max_len = max(max_len, i - l + 1); 
    } 
    return max_len; 
}
