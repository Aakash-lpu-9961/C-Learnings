#include<iostream>
using namespace std;
class basicinfo
{
	private:
		int roll;
	protected:
		char name[50];
	public:
		void getdata(void);
		int retro(void);
};
class fitness : public basicinfo
{
	private:
		int weight;
	public:
		int getw(void);
		char getpro(void);
		void display(void);
};
void basicinfo::getdata(void)
{
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter Roll:";
	cin>>roll;
}
int basicinfo::retro(void)
{
	return (roll);
}
int fitness::getw(void)
{
	cout<<"Enter Weight:";
	cin>>weight;
}
void fitness::getpro(void)
{
	return (name);
}	
void fitness::display(void)
{
	cout<<"Name:"<<name;
	cout<<"Roll No.:"<<roll;
	cout<<"Weight:"<<weight;
}
int main()
{
	fitness obj;
	obj.getdata();
	obj.getw();
	obj.display();
	return 0;
}
