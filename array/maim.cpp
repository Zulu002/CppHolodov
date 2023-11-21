#include <iostream>
#include <windows.h>
#include "array.h"
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Array myArray1;
    Array myArray2(15);


    cout << " Размер массива myArray1" << myArray1.getSize() << endl;
    cout << " Элементы массива myArray1, после его создания : \n" ;
    cout << myArray2;

    cout << "Введите 10 чисел:  ";
    myArray1.setArray();

    cout << "Введённый массив:  " << myArray1;

    cout << "Введите 15 чисел:  ";
    cin >> myArray2;

    cout << "Введённый массив: " << myArray2;

    Array myArray3(myArray1);

    cout << "Размер массива  myArray3: " << myArray1.getSize() << endl;
    cout << myArray3;

    if (myArray1 == myArray2)
        cout << "Массив myArray1 и myArray2 равны!\n";
    else
        cout << "Массив myArray1 и myArray2 не равны!\n";

    cout << "элементы массива myArray1: " << myArray1[myArray1.getSize() - 1] << endl;
    Array myArray4 = myArray2 + myArray3;
    cout << "Массив myArray4\n" << myArray4;

    myArray4 += 111;
    cout << "Массив myArray4 + 8:\n" << ((myArray4+=112) +=113);

    cout << (myArray4 - 111 - 112 - 113);

    int pos = 0;
    if ((pos = myArray4.search(30)) != -1)
        cout << "Позиция искомого элемента: " << pos << endl;
    else
        cout << "Искомый элемент не найден!\n";
    myArray4.choiceSort();
    cout << myArray4;

    return 0;

}

