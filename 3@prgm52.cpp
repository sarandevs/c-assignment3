#include <iostream>
using namespace std;

int main() {
	int n,a, i, num, digit, sum;

  cout << "Enter  number: ";
  cin >> n;

  a=1;

  cout << "Armstrong numbers between 1 and " << n<< " are: " << endl;
  for(i = a; i <= n; i++)
  {
        sum = 0;
        num = i;

        for(; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }

        if(sum == i)
        {
            cout << i << endl;
        }
  }

	return 0;
}
