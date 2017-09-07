#include <iostream>
using namespace std;

int main() {
	float p,c,b,m,cs,max,per;
    cout<<"physics mark is "<<endl;
    cin>>p;
    cout<<"chemistry mark is "<<endl;
    cin>>c;
    cout<<"biology mark is "<<endl;
    cin>>b;
    cout<<"maths mark is "<<endl;
    cin>>m;
    cout<<"computer mark is "<<endl;
    cin>>cs;
    cout<<"total of maximum mark in each subject"<<endl;
    cin>>max;
    per=((p+c+b+m+cs)/max)*100;
    cout<<"percentage is "<< per<<endl;
    
    if (per>=90) 
    {
            cout<<"grade is A";
    }
    
    else if (per>=80) 
    {
            cout<<"grade is B";
    }
    else if(per>=70) 
    {
            cout <<"grade is C";
    }
    else if(per>=60)
    {
    	cout<<"grade is D";
    }
    else if(per>=40)
    {
    	cout<<"grade is E";
    }
    else
    {
    	cout<<"grade is F";
    }
	return 0;
}
