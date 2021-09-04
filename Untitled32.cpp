//example of   inherritence
//inheritence in c++
#include<iostream>
using namespace std;
class number
{
	protected:
		int m , n;
	public:
		void getnum(void)
		{
			cout<<"Enter any number1:";
			cin>>m;
			cout<<"Enter any number2:";
			cin>>n;
		}
};
class addition: public number
{
	//protected:
		//int m , n;
	public:
		//public:
		//void getnum(void)
		//{
			//cout<<"Enter any number1:";
			//cin>>m;
			//cout<<"Enter any number2:";
			//cin>>n;
		//}
		
		void add(void)
		{
		getnum();
		cout<<"Addition Result: "<<m+n<<endl<<endl;	
		}
};
int main ()
{
	addition a;
	a.add();
	
	return 0;
}
