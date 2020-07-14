// https://www.interviewbit.com/problems/integer-to-roman/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string intToRoman(int);
};

string Solution::intToRoman(int A) {
    map<int, string, greater<>> roman = {
        {1, "I"},
        {4, "IV"},
        {5, "V"},
        {9, "IX"},
        {10, "X"},
        {40, "XL"},
        {50, "L"},
        {90, "XC"},
        {100, "C"},
        {400, "CD"},
        {500, "D"},
        {900, "CM"},
        {1000, "M"}
    };
    string op = "";
    auto it = roman.begin();
    while (A > 0) {
        int divi = A / (it -> first);
        A %= (it -> first);
        while (divi--) {
            op += it->second;
        }
        ++it;
    }
    return op;
}


