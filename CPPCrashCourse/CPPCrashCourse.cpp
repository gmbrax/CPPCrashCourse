// CPPCrashCourse.cpp: define o ponto de entrada para o aplicativo.
//

#include "CPPCrashCourse.h"
#include "Exercicios/Ex1.h"
#include "Exercicios/Ex2.h"
#include "Exercicios/Ex3.h"

using namespace std;

	int main()
	{	

		cout << "Hello CMake." << endl;
		int value1 = absolute_value(-666);
		int value2 = absolute_value(666);
		int value3 = sum_value(value1, value2);
		printf("value1: %d\nvalue2: %d\nvalue1+value2: %d\n", value1,value2,value3);
		Calculator dentaku{ Operation::Division };
		int result = dentaku.calculate(666, 3);
		printf("Calculated Value: %d\n", result);

		char lower[] = {'a','b','c','?','e'};
		char upper[] = {'A','B','C','?','E'};
		size_t lower_size = sizeof(lower) / sizeof(lower[0]);
		size_t upper_size = sizeof(upper) / sizeof(upper[0]);
		read_from(lower, lower_size);
		write_from(lower, lower_size, 3, 'd');
		read_from(lower,  lower_size);
		read_from(upper, lower_size);
		write_from(upper, lower_size, 3, 'D');
		read_from(upper, lower_size);

		Element trooper1, trooper2, trooper3;
		trooper1.prefix[0] = 'T';
		trooper1.prefix[1] = 'K';
		trooper1.operating_number = 421;
		trooper2.prefix[0] = 'F';
		trooper2.prefix[1] = 'N';
		trooper2.operating_number = 2187;
		trooper3.prefix[0] = 'L';
		trooper3.prefix[1] = 'S';
		trooper3.operating_number = 005;

		trooper3.insert_before(&trooper2);
		trooper2.insert_before(&trooper1);
	

		for (Element* cursor = &trooper1; cursor; cursor = cursor->next) {
			printf("stormtrooper: %c%c-%d\n", cursor->prefix[0], cursor->prefix[1], cursor->operating_number);
		}


		for (Element* cursor = &trooper3; cursor; cursor = cursor->previous) {
			printf("backwards stormtrooper: %c%c-%d\n", cursor->prefix[0], cursor->prefix[1], cursor->operating_number);
		}
		auto original = 100;
		auto& original_ref = original;
		printf("Original: %d\n", original);
		printf("Original Ref: %d\n", original_ref);


		return 0;
	}
