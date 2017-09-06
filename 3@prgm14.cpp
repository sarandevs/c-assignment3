#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout<<"enter the 3 angles of a triangle"<<endl;
	cin>>a>>b>>c;
	if(a+b+c==180)
	{
		cout<<"valid triangle";
	}
	else
	{
		cout<<"invalid triangle";
            }
	return 0;
}
