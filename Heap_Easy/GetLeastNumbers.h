#pragma once
#include<iostream>
#include<queue>
using namespace std;
class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) 
    {
        priority_queue<int, vector<int>, greater<int>> test;
        for (int i = 0; i < arr.size(); i++)test.push(arr[i]);
        vector<int>result;
        for (int i = 0; i < k; i++)
        {
            result.push_back(test.top());
            test.pop();
        }
        return result;
    }
};
