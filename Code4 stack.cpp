//
// stack.cpp
//
// defines stack methods

#include "stack.hpp"
#include <iostream>

// 
// Stack::push
// 
// input: val is the input getting saved
// output: nothing
// changed: stack array and top
//
// Description: push method 
void Stack::push(int val)
{
	if(top < STACK_SIZE)
	{
		stackArray[top] = val;
		top++;
	}
	else
	{
		std::cout << "Stack full!!!" << std::endl;

	}
	
}

int Stack::pop()
{
	if(top == 0)
	{
		return -99999;
	}
	else
	{
		top--;
		return stackArray[top];
	}
	
}
