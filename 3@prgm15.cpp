#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout<<"enter the 3 sides of a triangle"<<endl;
	cin>>a>>b>>c;
	if((a+b)>c&&(b+c)>a&&(c+a)>b)
	{
		cout<<"valid triangle";
	}
	else
	{
		cout<<"invalid triangle";
            }
	return 0;
}
