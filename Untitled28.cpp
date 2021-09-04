#include<iostream>
using namespace std;
class football
{
	private:
		 
		int roll;
	public:
		void getdata(void);
		 
		int retro(void);
};
class cricket:public football
{
	private:
		int weight;
	public:
		void getw(void);
		void display(void);
};
void football::getdata(void)
{
	 
	cout<<"Roll:";
	cin>>roll;
}
 
int football::retro(void)
{
	return (roll);
}
void cricket::getw(void)
{
	cout<<"Weight:";
	cin>>weight;
}
void cricket::display(void)
{
	 
		cout<<"Roll:"<<retro();
		cout<<"Weight:"<<weight;
}
int main()
{
	cricket a;
	a.getdata();
	a.getw();
	a.display();
	return 0;
}
