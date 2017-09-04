#include <iostream>
using namespace std;

int main(){
	char ch;
	cout<<" enter character"<<endl;
	cin>>ch;
	if((ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z'))
	{
		cout<<"its alphabet";
	}
            else if(ch>='0' && ch<='9')
            {
               	cout<<"its digit";
            }   	
            else
            {
            	cout<<"its special character";
            }
	return 0;
}
