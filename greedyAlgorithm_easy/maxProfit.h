#pragma once
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
//动态规划
class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        //dp0代表前一天不持股票的利润，dp1代表前一天持股票的利润，这里用第0天初始化
        int dp0 = 0, dp1 = -prices[0];    
        for (int i = 1; i < prices.size(); i++)
        {
            int newDp0 = max(dp0, dp1 + prices[i]);
            int newDp1 = max(dp1, dp0 - prices[i]);
            dp0 = newDp0;
            dp1 = newDp1;
        }
        //那么最后一天dp[n][0],dp[n][1]则肯定是全部卖出不持股钱最多。
        return dp0;
    }
};
/* 网上技巧
* 贪心算法
执行用时：8 ms, 在所有 C++ 提交中击败了46.16%的用户
内存消耗：12.6 MB, 在所有 C++ 提交中击败了25.73%的用户
class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int ans = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[i - 1]) ans += prices[i] - prices[i - 1];
        }
        return ans;
    }
};*/