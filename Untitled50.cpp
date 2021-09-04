#include<iostream>
using namespace std;
class comment
{
	public:
		comment()
	{
		cout<<"I Love Programing"<<endl;
	}
	void show(void)
	{
		cout<<"I am sick";
	}
};
int main()
{
	comment yes;
	yes.show();
	return 0;
}
