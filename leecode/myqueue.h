#pragma once
#include<iostream>
#include<stack>
using namespace std;
class MyQueue {
private:
    stack<int> firstStack;//主栈
    stack<int> secondStack;//辅栈
    //将辅栈转移到主栈
    void turnStack(stack<int>& first, stack<int>& second)
    {
        while (!second.empty())
        {
            first.push(second.top());
            second.pop();
        }
    }
public:
    /** Initialize your data structure here. */
    MyQueue() 
    {
       
    }

    /** Push element x to the back of queue. */
    void push(int x) 
    {
        firstStack.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        turnStack(firstStack, secondStack);
        int tmp = secondStack.top();
        secondStack.pop();
        turnStack(secondStack, firstStack);
        return tmp;
    }

    /** Get the front element. */
    int peek() {
        turnStack(firstStack, secondStack);//将主栈中元素全部放入辅栈
        int top = secondStack.top();//辅栈现在的顶部就是队列的头部
        turnStack(secondStack, firstStack);//现在将辅栈的所有元素放回主栈
        return top;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return firstStack.empty();
    }
};
