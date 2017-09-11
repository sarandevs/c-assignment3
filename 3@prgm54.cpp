#include <iostream>
using namespace std;

int main() {
int i,j,end,sum;
cout<<"enter number"<<endl;
cin>>end;
cout<<"perfect numbers are"<<endl;
for(i=1;i<=end;i++)
{
	sum=0;
	for(j=i;j<i;j++)
	{
		if(i%j==0)
		{
			sum+=j;
		}
	}
	if(sum==i)
	{
		cout<<i;
	}
}
	return 0;
}
