#include"myqueue.h"
int main()
{
	MyQueue* myQueue = new MyQueue();
	myQueue->push(1); // queue is: [1]
	myQueue->push(2); // queue is: [1, 2] (leftmost is front of the queue)

	cout<<"the first result is "<<myQueue->peek()<<endl; // return 1
	cout << "the second result is " << myQueue->pop()<<endl; // return 1, queue is [2]
	cout << "the third result is " << myQueue->empty() << endl; // return false
}