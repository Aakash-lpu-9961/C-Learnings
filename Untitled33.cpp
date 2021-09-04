#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[100];
	int roll;
	ofstream getdata("student.doc");
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter Roll: ";
	cin>>roll;
	getdata<<name<<endl;
	getdata<<roll<<endl;
	getdata.close();
	ifstream putdata("student.doc");
	putdata>>name;
	putdata>>roll;
	cout<<"Name:"<<name<<endl;
	cout<<"ROll: "<<roll<<endl;
	putdata.close();
	return 0;
}
