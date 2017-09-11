#include <iostream>
using namespace std;

int main() {
    int num, rem, sum = 0, i;

    cout<<"Enter a Number\n"<<endl;
    cin>>num;

    for (i = 1; i <= (num - 1); i++)

    {

        rem = num % i;

	if (rem == 0)

        {

            sum = sum + i;

        }

    }

    if (sum == num)
   {
        cout<<"Entered Number is perfect number";
   }
    else
   {
        cout<<"Entered Number is not a perfect number";
   }    
	return 0;
}
