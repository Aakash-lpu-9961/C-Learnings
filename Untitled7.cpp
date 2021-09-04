#include<iostream>
using namespace std;
int main()
{
	int a[]={10,30,50,70,90};
	int *p[5];
	int i;
	cout<<"Output via pointer"<<endl;
	cout<<"Adress\t Value";
	for(i=0;i<5;i++)
	{
		p[i]=&a[i];
		cout<<"\n"<<p[i];
		cout<<"  "<<*p[i];
	}
	return 0;
}
