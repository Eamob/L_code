#pragma once
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
//��̬�滮
class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        //dp0����ǰһ�첻�ֹ�Ʊ������dp1����ǰһ��ֹ�Ʊ�����������õ�0���ʼ��
        int dp0 = 0, dp1 = -prices[0];    
        for (int i = 1; i < prices.size(); i++)
        {
            int newDp0 = max(dp0, dp1 + prices[i]);
            int newDp1 = max(dp1, dp0 - prices[i]);
            dp0 = newDp0;
            dp1 = newDp1;
        }
        //��ô���һ��dp[n][0],dp[n][1]��϶���ȫ���������ֹ�Ǯ��ࡣ
        return dp0;
    }
};
/* ���ϼ���
* ̰���㷨
ִ����ʱ��8 ms, ������ C++ �ύ�л�����46.16%���û�
�ڴ����ģ�12.6 MB, ������ C++ �ύ�л�����25.73%���û�
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