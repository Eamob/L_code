#pragma once
#include<stack>
#include<iostream>
using namespace std;
//第一版
/*class CQueue {
private:
    stack<int> input;
    stack<int> temp;
    void exchange(stack<int>& a, stack<int>& b)
    {
        while (!a.empty())
        {
            b.push(a.top());
            a.pop();
        }
    }
public:
    CQueue()
    {
        while (!input.empty()) input.pop();
    }

    void appendTail(int value) 
    {
        input.push(value);
    }

    int deleteHead() 
    {
        if (!input.empty())
        {
            exchange(input, temp);
            int tmp = temp.top();
            temp.pop();
            exchange(temp, input);
            return tmp;
        }
        else return -1;
    }
};*/ 


//第二版
class CQueue {
private:
    stack<int> input;
    stack<int> output;

public:
    CQueue()
    {
        while (!input.empty()) input.pop();
        while (!output.empty()) output.pop();
    }

    void appendTail(int value)
    {
        input.push(value);
    }

    int deleteHead()//只有当output为空的时候，才把input里面的值放进output里面，
    {                 //就可以省略掉交换过程中的时间复杂度
        if (output.empty() && input.empty()) return -1;
        else if (output.empty() && !input.empty())
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }
        int tem = output.top();
        output.pop();
        return tem;
    }
};
/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
