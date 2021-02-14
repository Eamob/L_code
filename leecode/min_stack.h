#pragma once
#include<iostream>
#include<stack>
using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */
    struct Node
    {
        int val;
        int min;
        Node* next;
        Node(int _val, Node* _next = NULL):val(_val), min(val),next(_next){}
    };
    Node* head;
    MinStack():head(NULL)
    {
        head = new Node(0);
    }

    void push(int x) 
    {
        Node* tmp = new Node(x, head->next);
        if (head->next && x > head->next->min) tmp->min = head->next->min;
        head->next = tmp;
    }

    void pop() 
    {
        Node* tmp = head->next;
        if (tmp)
        {
            head->next = tmp->next;
            delete tmp;
        }
    }

    int top()
    {
        if (head->next) return head->next->val;
        else return 0;
    }


    int getMin()
    {
        if (head->next) return head->next->min;
        else return 0;
    }
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
