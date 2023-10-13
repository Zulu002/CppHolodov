#include <iostream>
using namespace std;

struct Marshut {
	char punkt_otp[50];
	char tim_otp[10];
	string vid;
	char punkt_pri[50];
	char tim_pri[10];
	int price;
};

Marshut* AddStruct(Marshut* Obj, const int amount);
void setData(Marshut* Obj, const int amount);
void showData(const Marshut* Obj, const int amount);
void showtrans(const Marshut* Obj, const int amount, string trans) {
	Marshut* tempObj = new Marshut[amount];
	int w = 0;
	bool flag = false;
	for (int i = 0; i < amount; i++) {
		if (Obj[i].vid == trans) {
			tempObj[w] = Obj[i];
			w++;
			flag = true;
		}
	}
	if (flag) {
		cout<<"Все рейсы с вашим транспортом:"<<endl;
		showData(tempObj, w);
	}
	else
		cout<<"Нет марштрутов.";
}

int main()
{
	setlocale(LC_ALL,"RU");
	Marshut* OurMarshut = 0;
	int marshutAmount = 0;
	int YesOrNot = 0;
	string trans;

	do {
		OurMarshut = AddStruct(OurMarshut, marshutAmount);
		setData(OurMarshut, marshutAmount);

		marshutAmount++;
		cout<<"Продолжить ввод данных (1 - да, 0 - нет): ";
		cin>> YesOrNot;
		cin.get();
	} while (YesOrNot != 0);

	showData(OurMarshut, marshutAmount);
	cout<<"Введите название транспорта: ";
	cin>>trans;
	showtrans(OurMarshut, marshutAmount, trans);
	delete[] OurMarshut;
	return 0;
}

Marshut* AddStruct(Marshut* Obj, const int amount) {
	if (amount == 0)
		Obj = new Marshut[amount + 1];
	else {
		Marshut* tempObj = new Marshut[amount + 1];
		for (int i = 0; i < amount; i++) {
			tempObj[i] = Obj[i];
		}
		delete[] Obj;
		Obj = tempObj;
	}
	return Obj;
}

void setData(Marshut* Obj, const int amount) {
	cout<<amount + 1<<" маршрут:\n";
	cout<<"Пукнт отправления: ";
	cin.getline(Obj[amount].punkt_otp, 50);
	cout<<"Время отправления: ";
	cin.getline(Obj[amount].tim_otp, 10);
	cout<<"Вид транспорта: ";
	cin>>Obj[amount].vid;
	cin.ignore();
	cout<<"Пукнт прибытия: ";
	cin.getline(Obj[amount].punkt_pri, 50);
	cout<<"Время прибытия: ";
	cin.getline(Obj[amount].tim_pri, 10);
	cout<<"Цена: ";
	cin>>Obj[amount].price;
	cin.get();
	cout<<endl;
}

void showData(const Marshut* Obj, const int amount) {
	cout<<endl;
	for (int i = 0; i < amount; i++) {
		cout<<" № "<<"Пукнт отправления\t"<<"Время отправления\t"<<"Вид транспорта\n";
		cout<<"| "<<i + 1<<" "<< Obj[i].punkt_otp<<"\t\t"<<Obj[i].tim_otp<<"\t\t\t"<<Obj[i].vid<<endl;
		cout<<"| Пукнт прибытия\t"<<"Время прибытия\t"<<"Цена\t"<<endl;
		cout<<"| "<<Obj[i].punkt_pri<<"\t\t"<<Obj[i].tim_pri<<"\t\t"<<Obj[i].price<<endl;
		cout<<"----------------------------------------------------------"<<endl;
	}
}