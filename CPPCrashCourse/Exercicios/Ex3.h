#pragma once
#include <cstdio>
#include <array>
void read_from(char array[], int size);
void write_from(char array[], int size, int idx, char data);

struct Element {
	Element* next{};
	Element* previous{};
	void insert_after(Element* new_element);
	void insert_before(Element* new_element);
	char prefix[2];
	short operating_number;
		
};