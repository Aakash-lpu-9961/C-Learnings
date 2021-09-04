#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string test;
	test = "I am Q the omnipot3ent";
	char ch = test[5];
	cout<<test[18]<<endl;
	test[18]='e';
	cout<<test<<endl;
	cout<<"ch="<<ch<<endl;
	return 0;
}
