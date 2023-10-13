
/*#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RU");

	double a ,b; 

	double* ptrA = &a;
	double* ptrB = &b;


	cout << "введите число a ";
	cin >> a;
	cout << "введите число b ";
	cin >> b;

	double* ptrLarger;
	double* ptrSmaller;

	if (*ptrA > *ptrB) {
		ptrLarger = ptrA;
		ptrSmaller = ptrB;
	}
	else {
		ptrLarger = ptrB;
		ptrSmaller = ptrA;
	}

	*ptrLarger += 7;
	*ptrSmaller -= 3;

	cout << "обновленное значения a " << a << endl;
	cout << "обновленное значения b " << b << endl;

	return 0;

}*/

/*#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RU");

	double a, b, c;

	

	cout << "введите число a ";
	cin >> a;
	cout << "введите число b ";
	cin >> b;

	double* ptrA = &a;
	double* ptrB = &b;

	c = *ptrB;
	*ptrB = *ptrA;
	*ptrA = c;

	cout << "обновленное значения a " << *ptrA << endl;
	cout << "обновленное значения b " << *ptrB << endl;

	return 0;

}*/

/*#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "RU");

	int n;
	double alfa;



	cout << "введите размер массива:  ";
	cin >> n;

	int* a = new int[n];

	cout << "Введите элементы массива a: " << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int lastFiveIndex = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] == 5) {
			lastFiveIndex = i;
			break;
		}
	}
	if (lastFiveIndex != -1) {
		int temp = a[0];
		a[0] = a[lastFiveIndex];
		a[lastFiveIndex] = temp;
	}

	cout << "Введите значение alfa: ";
	cin >> alfa;

	double sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > alfa) {
			sum += a[i];
			count++;
		}
	}

	double average = (count > 0) ? (sum / count) : 0;


	cout << "Массив после перестановки:" << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "Среднее арифметическое элементов больших " << alfa << " равно " << average << std::endl;


	delete[] a;

	return 0;
}*/


#include <iostream>
using namespace std;

void createAndSortArray(int* c, int n) {
	int* x = new int[n]; 

	int xSize = 0; 

	
	for (int i = 0; i < n; i++) {
		if (c[i] != 0) {
			x[xSize] = c[i] * 44;
			xSize++;
		}
	}

	
	for (int i = 0; i < xSize - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < xSize; j++) {
			if (x[j] < x[minIndex]) {
				minIndex = j;
			}
		}
		
		int temp = x[i];
		x[i] = x[minIndex];
		x[minIndex] = temp;
	}

	
	cout << "Отсортированный массив x(n): ";
	for (int i = 0; i < xSize; i++) {
		cout << x[i] << " ";
	}
	cout << endl;

	
	delete[] x;
}

int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "Введите размер массива c(n): ";
	cin >> n;

	int* c = new int[n];

	
	std::cout << "Введите элементы массива c(n): ";
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}

	createAndSortArray(c, n);

	
	delete[] c;

	return 0;
}

