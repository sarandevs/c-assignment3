#include <iostream>
using namespace std;

int main() {
	float a,b,p,l;
    cout<<"enter the cost price"<<endl;
    cin>>a;
    cout<<"enter the selling price"<<endl;
    cin>>b;
    
    if (b>a) 
    {
        p=b-a;
        cout<<"profit is "<< p;
    }
    
    else if (a>b) 
    {
        l=a-b;
        cout<<"loss is "<< l;
    }

    else 
    {
        cout <<"no profit no loss";
    }
	return 0;
}
