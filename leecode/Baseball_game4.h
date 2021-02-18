#pragma once
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& ops) 
    {
        int solution = 0;
        stack<int> nums;
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "C") nums.pop();
            else if (ops[i] == "D") nums.push(nums.top() * 2);
            else if (ops[i] == "+")
            {
                int a = nums.top();
                nums.pop();
                int N = a + nums.top();
                nums.push(a);
                nums.push(N);
            }
            else nums.push(atoi(ops[i].c_str()));
        }
        while (!nums.empty())
        {
            solution += nums.top();
            nums.pop();
        }
        return solution;
    }
};
