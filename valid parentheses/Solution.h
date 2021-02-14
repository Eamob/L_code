#pragma once
#include<string>
#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) 
    {
        if (s.empty())  return true;
        stack<char> result;
        for (int i = 0; i < s.size(); i++)
        {
            if (result.empty())
                result.push(s[i]);
            else if (result.top() == '(' && s[i] == ')' ||
                result.top() == '[' && s[i] == ']' ||
                result.top() == '{' && s[i] == '}')
                result.pop();
            else
                result.push(s[i]);
        }
        if (result.empty())return true;
        else return false;
    }
};
