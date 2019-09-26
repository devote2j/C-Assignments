#ifndef STACK_HPP
#define STACK_HPP

const unsigned int STACK_SIZE = 25;

class Stack 
{

public:
	Stack()
	{
		top = 0;
	}

	~Stack()
	{
	
	}

	void push(int);
	int pop();
	int peek();



private:
	int stackArray[STACK_SIZE];
	unsigned int top;


};

#endif
