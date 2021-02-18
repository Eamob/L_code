#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        vector<string>result;
        int flag = 0;
        for (int i = 1; i <= n; i++)
        {
            if (target[flag] == i && flag<target.size())
            {
                flag++;
                result.push_back("Push");
            }
            else if (target[flag] != i)
            {
                result.push_back("Push");
                result.push_back("Pop");
            }
        }
        return result;
    }
};
