#include <iostream>
using namespace std;

int main() {
float unit,bill;
	cout<<"Enter unit of electricity consumed : "<<endl;
	cin>>unit;

	if (unit<=50)
	{
		bill=(unit*0.50)+(unit*0.2);
		cout<<"total electricity bill = "<< bill;
	}
	else if(unit<=150)
	{	
		bill=(50*0.50)+((unit-50)*0.75)+(unit*0.2);
		cout<<"total electricity bill = "<< bill;
	}
	else if(unit<=250)
	{
		bill=(50*0.50)+((unit-50)*0.75)+((unit-150)*1.2)+(unit*0.2);
		cout<<"total electricity bill = "<< bill;
	}
            else
            {
            	bill=(50*0.50)+((unit-50)*0.75)+((unit-150)*1.2)+((unit-250)*1.5)+(unit*0.2);
		cout<<"total electricity bill = "<< bill;
            }

	return 0;
}
