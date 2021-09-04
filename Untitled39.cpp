#include<iostream>
using namespace std;
class aakash
{
	int a,b;
	public:
		void get_number(void);
		friend int add(void);
};
void aakash::get_number(void)
{
	cout<<"Enter Number:";
	cin>>a>>b;
}
int add(void)
{
	aakash z;
	int temp;
	z.get_number();
	temp = z.a + z.b;
	return(temp);
	
}
int main()
{
	int result;
	result = add();
	cout<<"Result:"<<result<<endl;
	
	return 0;
}
