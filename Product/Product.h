#pragma once
#include <iostream>
#include <string>

using namespace std;

/* File Product.h */

class Product {
	//��������� ������
private:
	string name; //�������� ��������
	double price; //���� ��������
	double weight; //��� ��������

	//��������� ������
public:
	//������ �����������
	Product() {};

	//�����������
	Product(string names, double prices, double weightt) {
		name = names;
		price = prices;
		weight = weightt;
	}

	//����������
	~Product() {
		cout << "������ ������ ��� �����" << endl;
	}


	//������������
	void setName(const string);

	const string getName() const;

	void setPrice(const double);

	double getPrice() const;

	void setWeight(const double);

	double getWeight() const;
};