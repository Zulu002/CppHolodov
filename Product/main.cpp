#include "Check.cpp" 
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int count_tovar;
	cout << "введите количество покупок ";
	cin >> count_tovar;
	cout << "\n";

	Check* store_tovar = new Check[count_tovar];
	
	for (int i = 0; i < count_tovar; i++){
		string name;
		double price;
		double weight;
		int ctt;
		cout << " Введите название товара >>"; cin >> name;
		cout << " Цена товара >>"; cin >> price;
		cout << " Вес товара >>"; cin >> weight;
		cout << " Общее количество товара"; cin >> ctt;
		store_tovar[i].setName(name);
		store_tovar[i].setPrice(price);
		store_tovar[i].setWeight(weight);
		store_tovar[i].setCount_Tovar(ctt);
		cout << "\n\n";
	}
	cout << "Название товара   " << "Цена товара   " << "Вес товара (кг)   " << "Количество купл.   " << "Сумма покупки   " << "Общий вес" << endl;
	for (int j = 0; j < count_tovar; j++) {
		store_tovar[j].printAllInfo();
	}
}