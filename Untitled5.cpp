#include<iostream>
using namespace std;
class student
{
	int roll;
	int mark;
	public:
		student();
		student(int);
		student(int,int);
		void show(void);
};
student::student()
{
	roll = 3;
	mark = 3;
}
student::student(int a)
{
	roll = mark = a;
}
student::student(int x, int y)
{
	roll = x;
	mark = y;
}
void student::show(void)
{
	cout<<"Roll: "<<roll<<endl;
	cout<<"Mark: "<<mark<<endl;
}
int main()
{
	student stu;
	student stu1(6);
	student stu2(3,4);
	stu.show();
	cout<<"One argument\n";
	stu1.show();
	cout<<"Two argument\n";
	stu2.show();
	return 0;
	
}
