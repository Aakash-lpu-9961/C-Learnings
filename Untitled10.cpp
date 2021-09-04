#include<iostream>
using namespace std;
class mobile
{
	int m =10;
	public:
		void disp()
		{
			cout<<"m ="<<m<<endl;
			cout<<"this->m ="<<this->m<<endl;
			cout<<"(*this).m = "<<(*this).m<<endl;
		}
};
int main()
{
	mobile obj;
	obj.disp();
	return 0;
}
