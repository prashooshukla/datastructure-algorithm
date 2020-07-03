// https://www.interviewbit.com/problems/binary-representation/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string findDigitsInBinary(int);
};

string Solution::findDigitsInBinary(int A) {
    string op = "";
    if (A == 0) return "0";
    while (A > 0) {
        op += to_string(A % 2);
        A /= 2;
    }
    reverse(op.begin(), op.end());
    return op;
}
