#pragma once
#include<stack>
#include<iostream>
using namespace std;
/*class Solution {
public:
    string removeDuplicates(string S) 
    {
        string solution;
        stack<char> help;
        for (int i = S.size()-1; i >=0; i--)
        {
            if (help.empty())help.push(S[i]);
            else if (S[i] != help.top()) help.push(S[i]);
            else help.pop();
        }
        while(!help.empty())
        {
            solution.push_back(help.top());
            help.pop();
        }
        return solution;    
    }
};*/

class Solution
{
public:
    string removeDuplicates(string& S)
    {
        int valid_char = 0;
        for (int i = 0; i < S.size(); i++)
        {
            if (valid_char == 0 || S[i] != S[valid_char - 1])
            {
                S[valid_char] = S[i];
                valid_char++;

                continue;
            }
            else if (S[i] == S[valid_char - 1])
            {
                valid_char--;
            }
        }
        S = S.substr(0, valid_char);
        return S;
    }
};

/*
* C++£¬Ô­µØËã·¨
class Solution {
public:
    string removeDuplicates(string S) {
        int top = 0;
        for (char ch : S) {
            if (top == 0 || S[top - 1] != ch) {
                S[top++] = ch;
            } else {
                top--;
            }
        }
        S.resize(top);
        return S;
    }
};*/
