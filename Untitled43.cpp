#include<iostream>
#include <fstream>
using namespace std;
int main()
{
	string notes;
 
	ofstream outfile ;//creating output stream
	outfile.open("file1.doc");//connecting first file to output stream
	cout<<"Enter Notes:"<<getline(cin,notes);
	outfile<<notes<<endl;//write to file1
	outfile.close();//disconnecting file from stream
	
	outfile.open("file2.doc");//connecting second file to output stream
	cout<<"Enter Shortnotes:"<<getline(cin,notes);
	outfile<<notes<<endl;//write to file2
	outfile.close();//disconnecting file from stream
	
	ifstream infile; //creating input stream
	infile.open("file1.doc"); //connecting first file to file1
	infile>>notes;//read fro file
	cout<<"Notes:"<<notes<<endl;
	infile.close();
	
	 
	infile.open("file2.doc"); //connecting second file to file2
	infile>>notes;//read fro file
	cout<<"Short Notes:"<<notes<<endl;
	infile.close();
	
	return 0;
}
