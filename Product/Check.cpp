#include "buy.h"
#include <iomanip>
using namespace std;

class Check : public Buy 
{
public:
	void printProductInfo() {
		cout << "�����: " << Product::getName() << " | " << "����: " << getPrice() << " | " << "���: " << getWeight() << endl;
	}

	void printBuyInfo() {
		cout << "������ �������: " << getCount_Tovar() << " | " << "����� �� ������� ��� ������ �����: " << getCount_To_Price_Tovar() << " | " << "����� ��� ���������� ������: " << getWeight_Tovar();
	}
	   void printAllInfo() {
		   cout << setw(10) << getName() << setw(15) << getPrice() << setw(15) << getWeight() << setw(15) << getCount_Tovar() << setw(20) << getCount_To_Price_Tovar() << setw(17) << getWeight_Tovar() << endl;
	   }

	
};
