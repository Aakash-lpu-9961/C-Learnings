//Program to add two numbers from single inheritence//
#include<iostream>
using namespace std;
class A  //Base class A //
{
	int m;  //private data member of class A//
	public:
		void getdata_m(void); // to getdata from user for operand 1
		int  retm(void);
};
class B: public A  //Derived class B //
//visibilty mode public means member functions of base class is public in derived class//
{
	int n, sum;  // private data member of class B//
	public:
		void getdata_n(void);
		int add(void);
		void display(void);
};
void A::getdata_m(void)
{
	cout<<"Enter value of M:";
	cin>>m;
}
int A::retm(void)
{
	return m;
}
void B::getdata_n(void)
{
	cout<<"Value of N: ";
	cin>>n;
}
int B::add(void)
{
	sum = retm()+n;
	return (sum);
}
void B::display(void)
{
	cout<<"Value of M:"<<retm()<<endl;
	cout<<"Value of N:"<<n<<endl;
	cout<<"Sum: "<<add()<<endl;
}
int main()
{
	B num;
	num.getdata_m();
	num.getdata_n();
	num.add();
	num.display();
	return 0;
}

