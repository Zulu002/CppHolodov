#include "array.h"
#include <iostream>
#include  <iomanip>
using namespace std;

Array::Array() {
	size = 10;
	ptr = new int[size];
	for(int i = 0; i < size; i++) {
		ptr[i] = 0;
	}
}
Array::Array(int arraySize) {
	size = (arraySize > 0 ? arraySize : 10);
	ptr = new int[size];

	for (int i = 0; i < size; i++) {
		ptr[i] = 0;
	}
}

Array::Array(const Array &arrayToCopy) : size(arrayToCopy){
	ptr = new int[size];
	for (int i = 0; i < size; i++) {
		ptr[i] = 0;
	}
}

Array::Array() {
	delet[] ptr;
}

int Array::getSize() const {
	return size;
}

istream& operator >> (istream& input, Array& obj) {
	for (int i = 0; i < obj.size; i++) {
		input >> obj.ptr[i];
		return input;
	}
}

ostream& operator<< (ostream& output, const Array& obj) {
	for (int i = 0; i < obj.size; i++) {
		output << setw(5) << obj.ptr[i];
	}
	output << endl;

	return output;
}
void Array::SetArray() {
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}
}
void Array::getArray() {
	for (int i = 0; i < size; i++) {
		cout << setw(5) << ptr[i];
		cout << endl;
	}
}