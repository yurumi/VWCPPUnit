#pragma once
#include "stack_exception.h"
namespace teacher {

	class stack {

	private:
		int* data;
		int index;

	public:
		stack();
		virtual ~stack();
		void push(const int value);
		int pop();
		bool is_empty() const;
		bool is_full() const;


	};


}
