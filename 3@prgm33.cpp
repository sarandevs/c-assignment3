#include <iostream>
using namespace std;

int main() {
	 int i,a=0,b,c,s;
cout<<"Enter any num : "<<endl;
cin>>i;
c=i%10;
while(i>0)
{
b=i;	
i=i/10;
a++;
}
s=b+c;
cout<<"sum of first and last number is "<<s<<endl;
    
	return 0;
}
