#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int n, i, last, first, numOfDigits, swapped;
	numOfDigits = 0;
	first = 0;
	
	cout << "Enter a number: ";
	cin >> n;
	
	last = n % 10;
	
	i = n;
	
	while (i != 0) {
		numOfDigits++;
		first = i;
		i = i/10;
	}
	
	swapped = n - ((first - last)*pow(10,numOfDigits-1)) - last + first;
	
	if (numOfDigits == 1) {
		cout << "The number that you entered has only one digit.\n";
	}
	
	else{
		cout << "The number " << n << " with its first and last digits swapped is " << swapped << ".\n";
	}

	return 0;
}
