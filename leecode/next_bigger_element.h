#pragma once
#include<iostream> 
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        
        vector<int>solution;
        
        for (int i = 0; i < nums1.size(); i++)
        {
            stack<int> tmp;
            for (int j = nums2.size() - 1; j >= 0; j--)
            {
                if (nums1[i] < nums2[j]) tmp.push(nums2[j]);
                else if (nums1[i] == nums2[j]) break;
            }
            if (!tmp.empty()) solution.push_back(tmp.top());
            else solution.push_back(-1);
        }
        return solution;
    }
}; 
