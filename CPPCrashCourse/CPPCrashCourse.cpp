// CPPCrashCourse.cpp: define o ponto de entrada para o aplicativo.
//

#include "CPPCrashCourse.h"
#include "Exercicios/Ex1.h"

using namespace std;

int main()
{	

	cout << "Hello CMake." << endl;
	int value1 = absolute_value(-666);
	int value2 = absolute_value(666);
	int value3 = sum_value(value1, value2);
	printf("value1: %d\nvalue2: %d\nvalue1+value2: %d", value1,value2,value3);
	return 0;
}
