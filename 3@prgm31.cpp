#include <iostream>
using namespace std;

int main() {

    int i,a=0;
cout<<"Enter any num : ";
cin>>i;
while(i>0)
{
i=i/10;
a++;
}
cout<<" no. of digits in given number is: "<<a;
    

	return 0;
}
