#pragma once
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution 
{
public:
    int largestSumAfterKNegations(vector<int>& A, int K) 
    {
        if (K == 0)
        {
            int sum = 0;
            for (int i = 0; i < A.size(); i++)sum += A[i];
            return sum;

        }
        sort(A.begin(), A.end());
        int sum = 0;
        for (int i = 0; i < A.size(); i++)
        {
            if (K == 0)break;
            if (A[i] <= 0)
            {
                A[i] = -A[i];
                K--;
            }
            else if (A[i] == 0)break;
            else
            {
                sort(A.begin(), A.end());
                i = 0;
                A[i] = -A[i];
                K--;
            }
        }
        int Sum = 0;
        for (int i = 0; i < A.size(); i++)Sum += A[i];
        return Sum;
    }
};
