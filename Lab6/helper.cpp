#include "helper.h"
#include "data.h"
#include "lab6.h"


bool is_real_number(std::string text)
{
	//^-?(0|[1-9][0-9]*)\.?[0-9]*$
	static const std::regex r("^-?(0|[1-9][0-9]*)\.?[0-9]*$");
	return regex_match(text.data(), r);
}

bool is_integer_number(std::string text)
{
	//^(0|-?[1-9][0-9]*)$
	static const std::regex r("^(0|-?[1-9][0-9]*)");
	return regex_match(text.data(), r);
}

void add(Item val)
{
	std::stack<Item> temp_stack;

	while (!STACK.empty()) {
		temp_stack.push(STACK.top() + val);
		STACK.pop();
	}

	while (!temp_stack.empty()) {
		STACK.push(temp_stack.top());
		temp_stack.pop();
	}
}

void subtract(Item val)
{
	std::stack<Item> temp_stack;

	while (!STACK.empty()) {
		temp_stack.push(STACK.top() - val);
		STACK.pop();
	}

	while (!temp_stack.empty()) {
		STACK.push(temp_stack.top());
		temp_stack.pop();
	}
}

void multiplication(Item val)
{
	std::stack<Item> temp_stack;

	while (!STACK.empty()) {
		temp_stack.push(STACK.top() * val);
		STACK.pop();
	}

	while (!temp_stack.empty()) {
		STACK.push(temp_stack.top());
		temp_stack.pop();
	}
}

void division(Item val)
{
	std::stack<Item> temp_stack;

	while (!STACK.empty()) {
		temp_stack.push(STACK.top() / val);
		STACK.pop();
	}

	while (!temp_stack.empty()) {
		STACK.push(temp_stack.top());
		temp_stack.pop();
	}
}