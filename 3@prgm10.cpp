#include <iostream>
using namespace std;

int main() {
	char a;
	cout<<" number is "<<endl;
	cin>>a;
	if(a>='A'&& a<='Z')
	{
		cout<<a <<" is uppercase";
	}
	else
	{
		cout<<a <<" is lowercase";
	}
	return 0;
}
