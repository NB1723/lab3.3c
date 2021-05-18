#include "Complex.h"
#include <iostream>
#include "Complex.cpp"
using namespace std;

int main()
{
	cout << "Initialization of public N" << endl;
	Complex N(4, 1), M;
	cout << "N:" << endl;
	cout << N << endl;

	cout << "Number of elements of class FuzzyNumber : " << Complex::Count() << endl;

	cout << "Initialization of public M" << endl;
	cin >> M;
	cout << "M:" << endl;
	cout << M << endl;

	cout << "Size of public class: " << sizeof(N) << endl << endl;

	cout << "Sum of complex numbers" << endl;
	{
		Complex C = N + M;
		cout << "C:" << endl;
		cout << C << endl;
		cout << "Number of elements of class FuzzyNumber : " << Complex::Count() << endl;
	}

	cout << "Product of complex numbers" << endl;
	Complex D = N * M;
	cout << "D:" << endl;
	cout << D << endl;

	cout << "Number of elements of class FuzzyNumber : " << Complex::Count() << endl;

	cout << "Comparison of complex numbers" << endl;
	if (N == M)
		cout << "Complex numbers are equal" << endl << endl;
	else
		cout << "Complex numbers are not equal" << endl << endl;

	cout << "++M: " << endl;
	cout << ++M << endl;
	cout << "--M: " << endl;
	cout << --M << endl;
	cout << "M++: " << endl;
	cout << M++ << endl;
	cout << "M--: " << endl;
	cout << M-- << endl;
}