#include <iostream>
using namespace std;

int main() {
	 int n,sum=0;
cout<<"Enter the num : "<<endl;
cin>>n;
while(n!=0)
{
sum=sum+(n%10);
n=n/10;
}
cout<<"sum of digits="<<sum;
    
	return 0;
}
