#include <iostream>
using namespace std;

int main() {
	int fac=1,rem=0,strong_num=0,store=0,loop=1,n;
	cout<<"enter the number"<<endl;
	cin>>n;

    cout<<"The strong numbers in the range 1 - n are given below";
    while(1<=loop<=n)
    {

        store=loop;
        while(loop>0)
        {
            rem=loop%10;
            while(loop>0)
{
    fac=1;  
    rem=loop%10;
    while(rem>0)
    {
        fac=fac*rem;
        rem--;
    }
    strong_num=strong_num+fac;
    loop=loop/10;
}
        }
        loop=store;
        if(strong_num==loop)
        {
            cout<<loop<<endl;
        }
        strong_num=0;
        loop++;
        fac=1;
    }
	return 0;
}
