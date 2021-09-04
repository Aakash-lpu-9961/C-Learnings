//example of multi-level inherritence
//inheritence in c++
#include<iostream>
using namespace std;
class food
{ //Base class 1
	protected:
		char name[100];
		char name1[100];
	public:
		void getdatan(void);
};
class price: public food
{ //intermediate derived class
	protected:
		int price;  //char name[100];
		int price1; //char name1[100];
	public:
		void getdatap(void); //void getdatan(void);
};
class total: public price
{ //Derived class 
	private:
		int sum;
	//protected:
	//int price;  //char name[100];
	//int price1; //char name1[100];
	public:
		int add(void);  //void getdatap(void);
		void disp(void); //void getdatan(void);
};
void food::getdatan(void)
{
	cout<<"Enter name of food :";
	cin>>name;
	cout<<"Enter name of second food: ";
	cin>>name1;
}
void price::getdatap(void)
{
	cout<<"Enter the price of food: ";
	cin>>price;
	cout<<"Enter the price of food1: ";
	cin>>price1;
}
int total::add(void)
{
	
	sum = price + price1;
	return (sum);
}
void total::disp(void)
{
	cout<<"Total price of foods: "<<add()<<endl;
}
int main()
{
	total f;
	f.getdatan();
	f.getdatap();
	f.disp();
	return 0;
}
