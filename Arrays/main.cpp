#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	// Array - ��� ����� ���������� ������ ���� � ����������� �������  ������.
	//cout << "Hello Arrays" << endl;
	const int SIZE = 5;
	int arr[SIZE] = {3, 5, 8};
	//arr[3] = 123;   // ���������� � �������� ������� �� ������
	//cout << arr[3] << endl;  // ��������� � �������� ������� �� ������
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}