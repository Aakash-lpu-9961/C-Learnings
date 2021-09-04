#include<iostream>
using namespace std;
class laptop
{
	int ram(int m)
	{
		return m ;
	}
	public:
		int(laptop::*pram)(int) = &laptop:: ram;
};
int main()
{
	laptop a;
	cout<<(a.*a.pram)(5);
	return 0;
}
