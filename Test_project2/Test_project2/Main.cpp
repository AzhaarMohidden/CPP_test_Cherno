#include<iostream>
using namespace std;

void Logger(const char* message);
void Logger2(const char* message2);

int Multiply(int a, int b);
int print_var();

long long abc;


int main()
{
	Logger("Sample - ");
	Logger2("Sample2 - ");
	int s = Multiply(5, 3);
	cout << s << endl;

	cout << "Sample Var1 = " << print_var() << endl;
	cout << sizeof(abc)<< endl;
	cin.get();
}