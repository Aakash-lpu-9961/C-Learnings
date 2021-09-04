#include<iostream>
#include<string>
using namespace std;
int main()
{
	string test;
	test = "I AM Q THE OMNIPOT3NT";
	char ch = test[5];  // ch is Q //
	test[18]= 'E' ;  //we correct misspelling of ommnipotent//
	cout<<test<<endl;
	cout<<"ch="<<ch<<endl;
	return 0; 
}
