#include<iostream> //*header file for input and output stream
using namespace std;
class student
{
	int id;
	int roll;
	public:
		student() //constructor defined inside class
		{
			id = 10; //*contructor initialized
			roll = 101;
			cout<<"ID: "<<id<<endl;
			cout<<"ROLL: "<<roll<<endl;
		}
};
int main()
{
	student stu; //*object defined for class
	return 0; // not expecting any value from function main
}
