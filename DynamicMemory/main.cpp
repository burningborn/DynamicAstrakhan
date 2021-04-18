#include<iostream>
using namespace std;
#define tab "\t"


//template<typename T>void Print(T arr[], const int n);
//template<typename T>void Print(T** arr, const int m, const int n);
//
//template<typename T>void pop_back(T*& arr, int& n);	
//template<typename T>void pop_front(T*& arr, int& n);
//template<typename T>void erase(T*& arr, int& n, int index);
//
//template<typename T>void push_row_back(T**& arr, int& m, const int n);
//template<typename T>void push_row_front(T**& arr, int& m, const int n);
//template<typename T>void insert_row(T**& arr, int& m, const int n, int index);
//
//template<typename T>void pop_row_back(T**& arr, int& m, const int n);
//template<typename T>void pop_row_front(T**& arr, int& m, const int n);
//template<typename T>void erase_row(T**& arr, int& m, const int n, int index);

#include"FillRand.h"
#include"Print.cpp"

#include"push_back.cpp"
#include"push_front.cpp"
#include"insert.cpp"

#include"pop_back.cpp"
#include"pop_front.cpp"
#include"erase.cpp"

#include"push_row_back.cpp"
#include"push_row_front.cpp"
#include"insert_row.cpp"

#include"pop_row_back.cpp"
#include"pop_row_front.cpp"
#include"erase_row.cpp"

#define DYNAMIC_MEMORY

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello" << endl;
#ifdef DYNAMIC_MEMORY
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n] {};
	FillRand(arr, n);
	Print(arr, n);
	int value;	//Добвляемое значение
	cout << "Введите добавляемое в конец массива значение: "; cin >> value;

	push_back(arr, n, value);
	Print(arr, n);

	cout << "Введите добавляемое в начало массива значение: "; cin >> value;
	push_front(arr, n, value);
	Print(arr, n);

	int index;
	cout << "Введите добавляемое значение элемента: "; cin >> value;
	cout << "Введите индекс добавляемого элемента: "; cin >> index;
	insert(arr, n, value, index);
	Print(arr, n);

	cout << "Удаление последнего элемента:\n";
	pop_back(arr, n);
	Print(arr, n);

	cout << "Удаление первого элемента:\n";
	pop_front(arr, n);
	Print(arr, n);

	cout << "Введите индекс удавляемого элемента: "; cin >> index;
	Print(arr, n);
	delete[] arr;
	system("pause");
	system("cls");

	cout << "\n ОБЪЯВЛЕНИЕ ДВУМЕРНОГО ДИНАМИЧЕСКОГО МАССИВА: \n\n";

	//------------------------ОБЪЯВЛЕНИЕ ДВУМЕРНОГО ДИНАМИЧЕСКОГО МАССИВА--------------------------		
	int r; //кол-во строк
	int c; // кол-во элеменьов строки
	cout << "Введите количество строк: "; cin >> r;
	cout << "Введите количество столбцов: "; cin >> c;
	//1)создаем массив указателей
	char** arr2 = new char* [r];
	//2)выделяем память под строки двумерного массива:
	for (int i = 0; i < r; i++)
	{
		arr2[i] = new char[c] {};
	}
	//----------------ИСПОЛЬЗОВАНИЕ ДВУМЕРНОГО ДИНАМИЧЕСКОГО МАССИВА--------------
	FillRand(arr2, r, c);
	Print(arr2, r, c);

	cout << "добавление строки в конец массива: " << endl;
	push_row_back(arr2, r, c);
	Print(arr2, r, c);

	cout << "добавление строки в начало массива: " << endl;
	push_row_front(arr2, r, c);
	Print(arr2, r, c);

	cout << "Введите индекс добавляемой пустой строки: "; cin >> index;
	insert_row(arr2, r, c, index);
	Print(arr2, r, c);


	cout << "Удаление последней строки: " << endl;
	pop_row_back(arr2, r, c);
	Print(arr2, r, c);

	cout << "Удаление нулевой строки: " << endl;
	pop_row_front(arr2, r, c);
	Print(arr2, r, c);


	cout << "Введите индекс удаляемой строки: "; cin >> index;
	erase_row(arr2, r, c, index);
	Print(arr2, r, c);


	//----------------УДАЛЕНИЕ ДВУМЕРНОГО ДИНАМИЧЕСКОГО МАССИВА--------------
	//1)Уаление строк:
	for (int i = 0; i < r; i++)
	{
		delete[] arr2[i];
	}
	//2) Удаление массива указателей:
	delete[] arr2;
#endif DYNAMIC_MEMORY
}