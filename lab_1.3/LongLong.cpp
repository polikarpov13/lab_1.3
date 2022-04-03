#include <iostream> 
#include <string> 
#include <sstream>  
#include <cmath> 
#include "LongLong.h" 

using namespace std;

void LongLong::Display() {
	cout << endl;
	cout << "Older part: " << older << endl;
	cout << "Younger part: " << younger << endl;
}



void LongLong::Init(double x, double y) {
	older = x;
	younger = y;
}



void LongLong::Read() {
	double x, y;

	cout << "The value of the older and the younger parts " << endl << endl;
	cout << "Enter the value of the older part: "; cin >> x;
	cout << "Enter the value of the younger part: "; cin >> y;

	Init(x, y);
}



double LongLong::Add() {
	return older + younger;
}



double LongLong::Multiply() {
	return older * younger;
}



void LongLong::Compare() {
	if (Add() == Multiply())
		cout << Add() << "  is equal  " << Multiply() << " \n ";

	if (Add() != Multiply())
		cout << Add() << "  is not equal  " << Multiply() << " \n ";

	if (Add() > Multiply())
		cout << Add() << "  is bigger than " << Multiply() << " \n ";

	if (Add() < Multiply())
		cout << Add() << "  is less than " << Multiply() << " \n ";

	if (Add() >= Multiply())
		cout << Add() << "  is bigger/equal than  " << Multiply() << " \n ";

	if (Add() <= Multiply())
		cout << Add() << "  is less/equal than  " << Multiply() << " \n ";

}