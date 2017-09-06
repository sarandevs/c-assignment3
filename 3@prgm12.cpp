#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"month number is "<<endl;
	cin>>a;
	if((a==1)||(a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(a==12))
	{
		cout<<"no of days is 31";
	}
	else if(a==2)
	{
		cout<<"no of days is 28";
	}
	else
	{
		cout<<"no of days is 30 ";
            }
	return 0;
}
