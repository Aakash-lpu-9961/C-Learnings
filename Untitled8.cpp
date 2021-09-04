#include<iostream>
using namespace std;
class laptop
{
     public:
	int ram;	
};
int main()
{
	int laptop::*pram; //Declaration
	pram=&laptop::ram; //Assignment
	laptop c1;
	c1.ram=1;
	cout<<"Ram is:"<<c1.ram<<endl;
	c1.*pram = 2;
	cout<<"Ram is:"<<c1.ram<<endl;
	return 0;
}
