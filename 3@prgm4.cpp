#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<" number"<<endl;
	cin>>a;
	if((a%5==0)&&(a%11==0))
	{
		cout<<"number is divisible";
	}
            else
            {
               	cout<<"number is not divisible";
            }
	return 0;
}
