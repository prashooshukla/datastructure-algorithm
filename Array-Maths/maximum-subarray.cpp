// https://leetcode.com/problems/maximum-subarray

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int N = nums.size();
        int maxi = nums[0];
        int curr_max = nums[0];
        for (int i = 1; i < N; i++) {
            curr_max = max(nums[i], curr_max + nums[i]);
            maxi = max(maxi, curr_max);
        }
        return maxi;
    }
};