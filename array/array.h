#include <iostream>
#include <ostream>
using namespace std;

class Array
{
	friend istream& operator>> (istream&, Array&);
	friend ostream& operator<< (ostream&, const Array&);
private:
	int* ptr;
	int size;
public:
	Array();
	Array(int);
	Array(const Array&);
	~Array();

	int getSize() const;
	void setArray();
	void getArray();
	const Array& operator= (const Array&);
	bool operator== (const Array&) const;
	int& operator[] (int);
	Array operator+ (const Array&);
	Array operator+= (const Array&);
	Array operator- (const Array&);
	int search(const int) const;
	void choiceSort();

};