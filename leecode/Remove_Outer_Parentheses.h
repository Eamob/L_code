#pragma once
#include<string>
#include<stack>
#include<iostream>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string S) 
    {
        stack<char> help;
        string result;
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == '(')
            {
                if (!help.empty())result.push_back('(');
                help.push(S[i]);
            }
            else if (S[i] == ')')
            {
                help.pop();
                if (!help.empty()) result.push_back(')');
                else continue;
            }
        }
        return result;
    }
};

/*网上最佳思路
* class Solution {
public:
	string removeOuterParentheses(string S) {
		string res = "";
		stack<char> mystack;
		for (int i = 0; i < S.size(); i++) {
			if (S[i] == ')')
				mystack.pop();
			if (!mystack.empty())
				res+=S[i];
			if (S[i] == '(')
				mystack.push('(');

		}
		return res;
	}
};
*/
