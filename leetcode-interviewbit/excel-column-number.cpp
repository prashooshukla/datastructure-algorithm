// https://www.interviewbit.com/problems/excel-column-number

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int titleToNumber(string);
};

int Solution::titleToNumber(string A) {
    int result = 0; 
    for (const auto& c : A) { 
        result *= 26; 
        result += c  - 'A' + 1; 
    } 
    return result; 
}
