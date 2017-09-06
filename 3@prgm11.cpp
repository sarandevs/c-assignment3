#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"week number is "<<endl;
	cin>>a;
	if(a==1)
	{
		cout<<"sunday";
	}
	else if(a==2)
	{
		cout<<"monday";
	}
	else if(a==3)
	{
		cout<<"tuesday";
	}
	else if(a==4)
	{
		cout<<"wednesday";
	}
	else if(a==5)
	{
		cout<<"thursday";
	}
	else if(a==6)
	{
		cout<<"friday";
	}
	else if(a==7)
	{
		cout<<"saturday";
	}
	else
	{
		cout<<"invalid number ";
	}
	return 0;
}
