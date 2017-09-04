#include <iostream>
using namespace std;

int main(){
	char ch;
	cout<<" character is "<<endl;
	cin>>ch;
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	{
		cout<<"its vowel";
	}
            else 
            {
               	cout<<"its consonant";
            }   	
	return 0;
}
