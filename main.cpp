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
	
	do {
		
		cout << "(A)dd or (S)ubtract or (M)ultiply or (D)ivide? ";
		cin >> op;
		
		switch(op){
			case 'a':
			case 'A':
				printoptions();
				cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
				break;
				
			case 's':
			case 'S':
				printoptions();
				cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
				break;
			
			case 'm':
			case 'M':
				printoptions();
				cout << num1 << " x " << num2 << " = " << (num1 * num2) << endl;
				break;
				
			case 'd':
			case 'D':
				printoptions();
				cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
				break;
				
			default:
				cout << op << " is not a valid option..." << endl;
		}
		cout << "\nDo you need to use the Calculator again (Y/n)? " << endl;
		cin >> again;
		
	} while ( 'n'!=again);	
	
	return 0;
}