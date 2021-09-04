#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[50];
	int roll;
	ofstream outfile("student.txt");
	cout<<"Enter Student Name:";
	cin>>name;
	cout<<"Enter Roll:";
	cin>>roll;
	outfile<<name<<endl;
	outfile<<roll<<endl;
	outfile.close();
	ifstream infile("student");
	infile>>name;
	infile>>roll;
	cout<<"name"<<name<<endl;
	cout<<"roll"<<roll<<endl;
	infile.close();
	return 0;
}
