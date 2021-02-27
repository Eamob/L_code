#pragma once
#include<string>
#include<iostream>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int position = 0;
        for (int j = 0; j < t.size(); j++)
        {
            if (s[position] == t[j])position++;
        }
        if (position == s.size())return true;
        else return false;
    }
};
