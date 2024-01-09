#include "Ex3.h"

void read_from(char array[],int size) {

	for (int i=0; i < size; i++) {
		printf("Array[%d] Value: %c\n", i, array[i]);
	}

}

void write_from(char array[], int size, int idx, char data) {
	if (idx > size - 1) {
		printf("Naughty Boy DON'T Fuck with that");
		exit(2);
	}
	if (idx < 0) {
		printf("That NOT fucking python");
		exit(3);
	}
	array[idx] = data;
}

void Element::insert_after(Element* new_element) {
    if (new_element == nullptr) return;

    new_element->next = next; // The new element's next is the current element's next
    if (next != nullptr) {
        next->previous = new_element; // The next element's previous is the new element
    }
    next = new_element; // The current element's next is the new element
    new_element->previous = this; // The new element's previous is the current element
}

void Element::insert_before(Element* new_element) {
    if (new_element == nullptr) return;

    new_element->previous = previous; // The new element's previous is the current element's previous
    if (previous != nullptr) {
        previous->next = new_element; // The previous element's next is the new element
    }
    new_element->next = this; // The new element's next is the current element
    previous = new_element; // The current element's previous is the new element
}