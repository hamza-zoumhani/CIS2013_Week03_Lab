#include <iostream>
using namespace std;

int main(){
	
	char op = 'A';
	char again = 'Y';
	int num1=0;
	int num2=0;
	
	
	cout << "Our C++ Calculator. \n";
	
	while ('n' != again){
		cout << "(A)dd or (S)ubtract? ";
		cin >> op;
		
		cout << "Enter the first number: ";
		cin >> num1;
		cout << "Enter the second number: ";
		cin >> num2;
		
		cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
		
		cout << "Do you want to use Calculator again (Y/n)? ";
		cin >> again;
	}
	
	return 0;
}