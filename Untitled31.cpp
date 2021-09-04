//example of  Hierarchical inherritence
//inheritence in c++
#include<iostream>
using namespace std;
class mathematics
{
	protected:
		int operand1;
		int operand2;
	public:
		void getdata(void);
};

 


class addition: public mathematics
{
	//protected:
		//int operand1;
		//int operand2;
	public:
		 
		void dispa(void);
};

 


class subtraction:public mathematics
{
	//protected:
		//int operand1;
		//int operand2;
	public:
	 
		void disps(void);
};


 


class multiplication:public mathematics
{
	//protected:
		//int operand1;
		//int operand2;
	public:
		 
		void dispm(void);
};


  
class division:public mathematics
{
	//protected:
		//int operand1;
		//int operand2;
	public:
	      
		void dispd(void);
};

 

void mathematics::getdata(void)
{
	cout<<"Enter the operand1:";
	cin>>operand1;
	cout<<"Enter the operand2:";
	cin>>operand2;
}


 
 
 
void addition::dispa(void)
{
	getdata();
	cout<<"Addition Result: "<< operand1+operand2<<endl;
}


 

 
void subtraction::disps(void)
{
	getdata();
	cout<<"Subtraction Result: "<<operand1-operand2<<endl;
}

 
 
void multiplication::dispm(void)
{
	getdata();
	cout<<" Multiplication Result: "<< operand1 * operand2<<endl;
}


 
void  division::dispd(void)
{
	getdata();
	cout<<" Division Result: "<< operand1 / operand2<<endl;
}


 


int main()
{
	 
	addition a;
	subtraction s;
	multiplication m;
	division d;
	
 
	 
	a.dispa();
	s.disps();
	m.dispm();
	d.dispd();
	
	return 0;
}
