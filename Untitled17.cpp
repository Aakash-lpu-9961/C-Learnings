#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int b;
	string A = "COUNTING THE NUMBER OF CHARACTERS IN A STRING ";
	b = A.length();
	cout<<"String length:"<<b<<endl;
	if(b>0)
	{
		cout<<"YOU ARE GOOD PROGRAMMER"<<endl;
	}
	else
	{
		cout<<"YOU HAVE NOT SEEN ME";
	}
	return 0;
}
