#include<iostream>
using namespace std;
class basicinfo
{
	private:
		int rollno;
		char name[50];
		int weight;
	public:
		void getdata(void);
		void display(void);
		int retro(void);
		int retwe(void);
		void name(void);
};
class fitness :: protected basicinfo
{
	private:
		int height;
		char grade;
	protected:
		void get(void);
		void put(void);
}
