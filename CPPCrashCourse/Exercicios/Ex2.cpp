#include "Ex2.h"

Calculator::Calculator(Operation op) {
	operation = op;
};


int Calculator::calculate(int a, int b) {
		switch (operation) {
		case Operation::Addition: {
			return a + b;
		}break;
		case Operation::Subtraction: {
			return a - b;
		}break;
		case Operation::Multiplication: {
			return a * b;
		}break;
		case Operation::Division: {
			return a / b;
		}break;
		};
	
	
	};
