#pragma once
#include<string>
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
class Solution 
{
public:
    string makeGood(string s)
    {
        string result;
        for (int i = 0; i < s.size(); i++)
        {
            if (result.empty())result.push_back(s[i]);
            else if (abs(s[i] - result.back()) == 32) result.pop_back();
            else result.push_back(s[i]);
        }
        return result;
    }
};
