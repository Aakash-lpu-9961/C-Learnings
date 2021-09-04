#include<iostream>
using namespace std;
int main()
{
	int a[]={5,16,67,88};
	int *p;
	p = &a[1];
	cout<<"Value:"<<*p<<endl;
	p++;
	cout<<"Value:"<<*p<<endl;
	p--;
	cout<<"Value:"<<*p<<endl;
	return 0;
	
}
