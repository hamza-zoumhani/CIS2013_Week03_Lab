#include <iostream>
using namespace std;

int num1=0;
int num2=0;
	
void printoptions(){
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
}
int main(){
	
	char op = 'A';
	char again = 'Y';
	
	
	
	cout << "Our C++ Calculator. \n";
	
	while ('n' != again){
		
		cout << "(A)dd or (S)ubtract or (M)ultiply or (D)ivide? ";
		cin >> op;
		
		if( ('A' == op) | ( 'a' == op)){
			printoptions();
			cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
		}
		
		else if( ('S' == op) | ( 's' == op)){
			printoptions();
			cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
		}
		
		else if( ('M' == op) | ( 'm' == op)){
			printoptions();
			cout << num1 << " x " << num2 << " = " << (num1 * num2) << endl;
		}
		
		else if( ('D' == op) | ( 'd' == op)){
			printoptions();
			cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
		}
		
		else {
			cout << op << " is not a valid option..." << endl;
		}
		
		
		cout << "Do you want to use Calculator again (Y/n)? ";
		cin >> again;
	}
	
	return 0;
}