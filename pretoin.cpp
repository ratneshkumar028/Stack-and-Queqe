#include <bits/stdc++.h>
using namespace std;
// User function Template for C++

class Solution {
  public:
    string preToInfix(string pre_exp) {
        // Write your code here
        stack<string> s;
        int n = pre_exp.size();
        for(int i =n-1;i>=0;i--){
            char c = pre_exp[i];
            if(isalnum(c)){
                s.push(string(1,c));
            }
            else{
                string p1 = s.top();s.pop();
                string p2 = s.top();s.pop();
                s.push("(" + p1 + string(1,c) + p2 + ")");
            }
        }
        return s.top();
    }
};