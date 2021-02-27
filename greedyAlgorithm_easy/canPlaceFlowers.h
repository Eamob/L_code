#pragma once
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n)
    {
        //防御式编程思想，在数组的两侧各增加一个0，好处为这样不用考虑边界条件
        /*
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.push_back(0);
        for (int i = 1; i < flowerbed.size()-1; i++)
        {
            if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0)n--;
            if (n == 0)break;
        }
        if (n == 0) return true;
        else return false;
        */
        //贪心算法

    }
};