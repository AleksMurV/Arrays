#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	// Array - это набор переменных одного типа в непрерывной области  памяти.
	//cout << "Hello Arrays" << endl;
	const int SIZE = 5;
	int arr[SIZE] = {3, 5, 8};
	//arr[3] = 123;   // обращаемся к элементу массива на запись
	//cout << arr[3] << endl;  // обращение к элементу массива на чтение
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}