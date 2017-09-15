#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int n, i, numOfDigits, digit, denominator;
	numOfDigits = 0;
	
	cout << "Enter a binary number: ";
	cin >> n;
	
	
	i = n;
	
	while (i != 0) {
		numOfDigits++;
		i = i/10;
	}
	
	cout << "The one's complement of " << n << " is ";
	
	for (int j = 1; j <= numOfDigits; j++) {
		denominator = pow(10, numOfDigits - j);
		digit = (n/denominator) % 10;
		
		if (digit == 0) {
			cout << 1;
		}
		else {
			cout << 0;
		}
	}
	
	cout << endl;
	
	return 0;
}
