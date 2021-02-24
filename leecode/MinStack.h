#pragma once
#include<stack>
#include<iostream>
using namespace std;
class MinStack {
private:
    struct Node
    {
        int val;
        int min;
        Node* next;
        Node(int _val, Node* _next=NULL) { val = _val; min = _val; next = _next; }
    };
    Node* head;
public:
    /** initialize your data structure here. */
    MinStack() 
    {
        head = new Node(0);
    }

    void push(int x) 
    {
        Node* tmp = new Node(x, head->next);
        if(head->next&& x > head->next->min)tmp->min = head->next->min;
        head->next = tmp;
    }

    void pop() 
    {
        Node* tmp= head->next;
        if (head->next)
        {
            head->next = head->next->next;
            delete tmp;
        }
    }

    int top()
    {
        if (head->next) return head->next->val;
        else return -1;
    }

    int min() 
    {
        if (head->next) return head->next->min;
        else return 0;
    }
};
