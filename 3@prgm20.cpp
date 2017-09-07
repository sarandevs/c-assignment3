#include <iostream>
using namespace std;

int main() {
float basic, gross, HRA, DA;
	cout<<"Enter basic salary of Employee : "<<endl;
	cin>>basic;

	if (basic<=10000)
	{
		HRA=0.2*basic;
		DA=0.8*basic;
	}
	else if(basic<=20000)
	{	
		HRA=0.25*basic;
		DA=0.9*basic;
	}
	else
	{
		HRA=0.3*basic;
		DA=0.95*basic;
	}

	gross = basic+HRA+DA;
	cout<<"Gross salary is : "<<gross;

	return 0;
}
