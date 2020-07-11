// https://www.interviewbit.com/problems/rotated-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findMin(const vector<int>&);
};

int Solution::findMin(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int N = (int) A.size();
    int low  = 0;
    int high = N - 1;
    while (low <= high) {
        if (A[low] <= A[high]) return A[low];
        int mid = low + (high - low) / 2;
        int next = (mid + 1) % N;
        int prev = (mid + N - 1) % N;
        if (A[mid] <= A[next] and A[mid] <= A[prev])
            return A[mid];
        else if (A[mid] <= A[high])
            high = mid - 1;
        else if (A[mid] >= A[low])
            low = mid + 1;
    }
    return -1;
}
