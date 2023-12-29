#pragma once
#include <cstdio>

enum class Operation
{
	Addition,
	Subtraction,
	Multiplication,
	Division

};

struct  Calculator {
private:
	Operation operation;
public:
	Calculator(Operation operation);
	int calculate(int a, int b);
};