#pragma once
#include<string>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    int minOperations(vector<string>& logs) 
    {
        int step = 0;
        for (int i = 0; i < logs.size(); i++)
        {
            if (step == 0)
            {
                if (logs[i] == "../" || logs[i] == "./")continue;
                else step++;
            }
            else
            {
                if (logs[i] == "../")step--;
                else if(logs[i] == "./")continue;
                else step++;
            }
        }
        return step;
    }
};

