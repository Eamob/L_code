#pragma once
#include<string>
#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string S, string T) 
    {
        stack<char> s, t;
        for (int i = 0; i < S.size(); i++)
        {
            if (!s.empty() && S[i] == '#')s.pop();
            else if (S[i] != '#') s.push(S[i]);
        }
        for (int i = 0; i < T.size(); i++)
        {
            if (!t.empty() && T[i] == '#')t.pop();
            else if (T[i] != '#') t.push(T[i]);
        }
        if (s == t) return true;
        else return false;
    }
};
