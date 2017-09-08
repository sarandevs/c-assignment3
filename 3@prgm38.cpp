#include <iostream>
using namespace std;

int main() {
	int num,rem,sum=0,temp;
cout<<"Enter the num : "<<endl;
cin>>num;
temp=num;
while(num)
{
rem=num%10;
num=num/10;
sum=sum*10+rem;
}
if(temp==sum)
{
	cout<<"number is palindrome";
}
else
{
	cout<<"number is not palindrome ";
}
	return 0;
}
