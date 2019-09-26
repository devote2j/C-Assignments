#include "stack.hpp"

int main(int argc, char **argv)
{
	Stack stack = Stack();
	stack.push(10);

	Stack *ptrStack = new Stack();
	ptrStack->push(11);
}