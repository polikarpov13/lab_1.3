#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
#include <Windows.h>  
#include "LongLong.h" 

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	LongLong z;

	z.Read();
	z.Display();

	cout << "Addition: " << z.Add() << endl;

	cout << "Multiplication: " << z.Multiply() << endl;

	cout << "Comparison: " << " \n ";

	z.Compare();

	cin.get();

	return 0;

}