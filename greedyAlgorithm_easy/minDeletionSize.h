#pragma once
#include<vector>
#include<string>    
#include<iostream>
using namespace std;
class Solution {
public:
    int minDeletionSize(vector<string>& strs) 
    {
        int deletion = 0;
        for (int i = 0; i < strs[0].size(); i++)
        {
            for (int j = 0; j < strs.size()-1; j++)
            {
                if (strs[j][i] > strs[j + 1][i])
                {
                    deletion++;
                    break;
                }
            }
        }
        return deletion;
    }
};
