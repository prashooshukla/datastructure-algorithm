// https://www.interviewbit.com/problems/reverse-the-string/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public: 
        string solve(string);
};

string Solution::solve(string A) {
    if(A.length() == 0) 
        return A;
    stack<string> stack;
    string result;
    for(int i = 0; i < A.length(); i++) {
        string word;
        if(A[i] == ' ') continue;
        while(i < A.length() && A[i] != ' ' ) {
            word += A[i]; 
            i++;
        }
        stack.push(word);
    }
    while(!stack.empty()) {
        result += stack.top(); 
        stack.pop();
        if(!stack.empty()) 
            result += " ";
    }
    return result;
}
