#pragma once
#include<iostream>
#include<queue>
using namespace std;
class MyStack {
private:
    queue<int> que;
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        //翻转队列，将新元素插到队头
        int size = que.size();
        que.push(x);
        while (size--)
        {
            int temp = que.front();
            que.pop();
            que.push(temp);
        }
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() 
    {
        if (!que.empty())
        {
            int tmp= que.front();
            que.pop();
            return tmp;
            
        }
        else return -1;
    }

    /** Get the top element. */
    int top() {
        return que.front();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return que.empty();
    }
};



