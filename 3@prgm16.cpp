#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout<<"enter the 3 sides of a triangle"<<endl;
	cin>>a>>b>>c;
	if(a==b&&b==c)
	{
		cout<<"equilateral triangle";
	}
	else if((a==b)||(a==c)||(b==c))
	{
		cout<<"isosceles triangle";
            }
            else
            {
            	cout<<"scalene triangle";
            }
	return 0;
}
