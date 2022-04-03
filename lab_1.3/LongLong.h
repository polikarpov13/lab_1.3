#pragma once 
class LongLong {
	double older;
	double younger;

public:

	double Getolder() const { return older; }
	double Getyounger() const { return younger; }

	void Setolder(double value) { older = value; }
	void Setyounger(double value) { younger = value; }

	void Compare();
	void Init(double, double);
	void Read();
	void Display();
	double Add();
	double Multiply();

};