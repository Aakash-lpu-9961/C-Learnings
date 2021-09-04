#include<iostream>
using namespace std;
class A
{
	int m;
	public:
		void getdata1(void);
		int retm(void);
};
class B: public A
{
	int n, sum;
	public:
		void getdata2(void);
		int add(void);
		void disp(void);
};
void A::getdata1(void)
{
	cout<<"Value of M:";
	cin>>m;
}
int A::retm(void)
{
	return m;
}
void B::getdata2(void)
{
	cout<<"Value of N:";
	cin>>n;
}
int B::add(void)
{
	sum = retm() + n;
	return (sum);
}
void B::disp(void)
{
	cout<<"Value of M:"<<retm()<<endl;
	 
	cout<<"Value of N:"<<n<<endl;
	 
	cout<<"Result:"<<add()<<endl;
 
}
int main()
{
	B num;
	num.getdata1();
	num.getdata2();
	num.add();
	num.disp();
	return 0;
}
