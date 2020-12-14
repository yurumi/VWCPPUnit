#include "stack.h"

teacher::stack::stack()
{
	index = 0;
	data = new int[10];
}

teacher::stack::~stack()
{
	delete []data;
}

void teacher::stack::push(const int value)
{
	if (is_full()) throw new stack_exception();
	data[index++] = value;
}

int teacher::stack::pop()
{
	if (is_empty()) throw new stack_exception("underflow");
	return data[--index];
}

bool teacher::stack::is_empty() const
{
	return index <= 0;
}
bool teacher::stack::is_full() const
{
	return index >= 10;
}
