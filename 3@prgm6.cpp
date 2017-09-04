#include <iostream>
using namespace std;

int main(){
	int y;
	cout<<" year "<<endl;
	cin>>y;
	if((y%4==0)&&(y%100!=0))
	{
		cout<<"its not year";
	}
            else if(y%100==0)
            {
               	cout<<"its leap not year";
            }
            else if(y%400==0)
            {
            	cout<<"its leap year";
            }
            else
            {
            	cout<<"its leap not year";
            }
	return 0;
}
