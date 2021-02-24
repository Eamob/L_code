#pragma once
#include<iostream>
#include<stack>
using namespace std;
class MyQueue {
private:
    stack<int> firstStack;//��ջ
    stack<int> secondStack;//��ջ
    //����ջת�Ƶ���ջ
    void turnStack(stack<int>& first, stack<int>& second)
    {
        while (!first.empty())
        {
            second.push(first.top());
            first.pop();
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
        if (!secondStack.empty())
        {
            int tmp = secondStack.top();
            secondStack.pop();
            return tmp;
        }
        else
        {
            turnStack(firstStack, secondStack);
            int tmp = secondStack.top();
            secondStack.pop();
            return tmp;
        }
    }

    /** Get the front element. */
    int peek() {
        if (!secondStack.empty()) return secondStack.top();
        else
        {
            turnStack(firstStack, secondStack);//����ջ��Ԫ��ȫ�����븨ջ
            return secondStack.top();
        }
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return firstStack.empty() && secondStack.empty();
    }
};
