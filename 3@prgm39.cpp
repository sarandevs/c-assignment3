#include <iostream>
using namespace std;

int main() {
	int m,num,dig,p;
cout<<"number entered is "<<endl;
cin>>num;
for(int i = 1;i<=9;i++)
{
m = num;
int c=0;
while(m>0)
{
dig=m%10;
if(dig==i)
{
c++;
p=dig;
}
m/=10;
}
if(c>=1)
cout<<"Frequency of "<<i<< "is "<<c<<endl;
}
	return 0;
}
