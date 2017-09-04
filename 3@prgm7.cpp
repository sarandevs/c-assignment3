#include <iostream>
using namespace std;

int main(){
	char ch;
	cout<<" character is "<<endl;
	cin>>ch;
	if((ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z'))
	{
		cout<<"its alphabet";
	}
            else 
            {
               	cout<<"its not a alphabet";
            }   	
	return 0;
}
