#pragma once
#pragma pack(1)
#include "Object.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Complex : public Object
{
private:
	int x, y;

public:
	Complex();
	Complex(int x, int y);
	Complex(const Complex& v);

	int GetRe() const { return x; }
	int GetIm() const { return y; }

	void SetRe(int value) { x = value; }
	void SetIm(int value) { y = value; }

	Complex& operator = (const Complex& n);
	operator string() const;

	Complex& operator --();
	Complex& operator ++();
	Complex operator --(int);
	Complex operator ++(int);

	friend  Complex operator + (const Complex Z1, const Complex Z2);
	friend  Complex operator * (const Complex Z1, const Complex Z2);
	friend  bool operator == (const Complex Z1, const Complex Z2);

	friend ostream& operator <<(ostream& out, const Complex& a);
	friend istream& operator >>(istream& in, Complex& a);
};