#include"mystack.h"
int main()
{
	MyStack ms;
	ms.push(1);
	ms.pop();
	cout << ms.empty() << endl<<"?" << endl;
	return 0;
}