#pragma once
#include<stack>
#include<iostream>
using namespace std;
//��һ��
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


//�ڶ���
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

    int deleteHead()//ֻ�е�outputΪ�յ�ʱ�򣬲Ű�input�����ֵ�Ž�output���棬
    {                 //�Ϳ���ʡ�Ե����������е�ʱ�临�Ӷ�
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
