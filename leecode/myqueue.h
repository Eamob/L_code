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
        turnStack(firstStack, secondStack);//����ջ��Ԫ��ȫ�����븨ջ
        int top = secondStack.top();//��ջ���ڵĶ������Ƕ��е�ͷ��
        turnStack(secondStack, firstStack);//���ڽ���ջ������Ԫ�طŻ���ջ
        return top;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return firstStack.empty();
    }
};
