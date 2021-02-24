#pragma once
#include<vector>
#include <stdio.h>
#include<iostream>
#include <algorithm> 
#include <queue>
using namespace std;
class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>>Heap;
    int heapSize, k;
public:
    KthLargest(int _k, vector<int>& nums) :heapSize(0), k(_k)
    {
        int n = nums.size();
        while (heapSize < k)
        {
            if (nums.empty())break;
            else
            {
                Heap.emplace(nums[heapSize]);
                heapSize++;
            }
        }
        for (int i = k; i < n; i++)
        {
            if (nums[i] > Heap.top())
            {
                Heap.pop();
                Heap.emplace(nums[i]);
            }
        }
    }

    int add(int val)
    {
        if (heapSize < k)
        {
            Heap.emplace(val);
            heapSize++;
            return Heap.top();
        }
        if (val > Heap.top())
        {
            Heap.pop();
            Heap.emplace(val);

        }
        return Heap.top();
    }
};
