#include<iostream>
using namespace std;
class student
{
    char name[100];
    int roll;
    protected:
    int height;
    public:
    	void get(void);
    	void put(void);
};
class detail:public student
{
	int weight;
	char grade;
	public:
	void getdata(void);
    	void putdata(void);
};
void student ::  get(void)
{
	cout<<"Name of student:";
	cin>>name;
	cout<<"Roll of student:";
	cin>>roll;
}
void student ::  put(void)
{
	cout<<"Name of student:"<<name;
	 
	cout<<"Roll of student:"<<roll;
	 
}
void detail ::  getdata(void)
{
	cout<<"Weight of student:";
	cin>>weight;
	cout<<"Grade of student:";
	cin>>grade;
}
void detail ::  putdata(void)
{
	cout<<"Weight  of student:"<<weight;
	 
	cout<<"Grade of student:"<<grade;
	 
}
int main()
{
	detail obj;
	obj.get();
	obj.getdata();
	obj.put();
	obj.putdata();
	return 0;
}
