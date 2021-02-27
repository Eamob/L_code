#pragma once
#include<vector>
#include<iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        //贪心算法是优先小的，因此需要先排序
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int child = 0, cookie = 0;//满足的孩子以及
        while (child < g.size() && cookie < s.size())//当其中一个遍历完就结束
        {
            if (g[child] <= s[cookie]) child++;
            cookie++;
        }
        return child;
    }
};
