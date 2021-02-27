#pragma once
#include<vector>
#include<iostream>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        //̰���㷨������С�ģ������Ҫ������
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int child = 0, cookie = 0;//����ĺ����Լ�
        while (child < g.size() && cookie < s.size())//������һ��������ͽ���
        {
            if (g[child] <= s[cookie]) child++;
            cookie++;
        }
        return child;
    }
};
