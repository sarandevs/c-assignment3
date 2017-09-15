#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int n, i, numOfDigits, digit;
	
	numOfDigits = 0;
	
	cout << "Enter a number: ";
	cin >> n;
	
	i = n;
	
	
	while (i != 0) {
		digit = i % 10;
		numOfDigits++;
		i = i/10;
		
		if (digit == 0) {
			cout << "zero ";
		}
		
		else if (digit == 1) {
			cout << "one ";
		}
		
		else if (digit == 2) {
			cout << "two ";
		}
		
		else if (digit == 3) {
			cout << "three ";
		}
		
		else if (digit == 4) {
			cout << "four ";
		}
		
		else if (digit == 5) {
			cout << "five ";
		}
		
		else if (digit == 6) {
			cout << "six ";
		}
		
		else if (digit == 7) {
			cout << "seven ";
		}
		
		else if (digit == 8) {
			cout << "eight ";
		}
		
		else {
			cout << "nine ";
		}
	}
	
	cout << endl;
	
	return 0;
}
