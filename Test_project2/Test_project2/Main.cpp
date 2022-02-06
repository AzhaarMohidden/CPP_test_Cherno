#include <iostream>
#include "header.h"

using namespace std;

//void Logger(const char* message);
//void Logger2(const char* message2);

//int Multiply(int a, int b); 
//int print_var();
//int factorial(int num);

//long long abc;


void func() {
	cout << "Enter number to Factorial: ";
	int factorial_num;
	cin >> factorial_num;
	int res = factorial(factorial_num);
	cout << res << endl;
}



int main()
{
	Logger("Sample - ");
	Logger2("Sample2 - ");
	int s = Multiply(5, 3);
	cout << s << endl;
	cout << "Sample Var1 = " << print_var() << endl;
	cout << "Enter number to Factorial: ";
	int factorial_num;
	cin >> factorial_num;
	int res = factorial(factorial_num);
	cout << res << endl;
	//cout << sizeof(abc)<< endl;
	cin.get();
	return 0;
}