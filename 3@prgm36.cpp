#include <iostream>
using namespace std;

int main() {
	 int n,pro=1;
cout<<"Enter the num : "<<endl;
cin>>n;
while(n!=0)
{
pro=pro*(n%10);
n=n/10;
}
cout<<"product of digits="<<pro;
    
	return 0;
}
