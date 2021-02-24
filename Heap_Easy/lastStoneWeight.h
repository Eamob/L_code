#pragma once
#include<vector>
#include<algorithm>
#include <queue>
#include<iostream>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        priority_queue<int, vector<int>, less<int>>tmp;
        for (int i = 0; i < stones.size(); i++) tmp.push(stones[i]);
        while (tmp.size() > 1)
        {
            int x = tmp.top();
            tmp.pop();
            int y = tmp.top();
            tmp.pop();
            if (x > y)tmp.push(x - y);
        }
        if (tmp.empty())return 0;
        else return tmp.top();  
    }
};
