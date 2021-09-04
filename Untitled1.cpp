#include<iostream>
using namespace std;
class total
{
	private:
		int n;
	public:
		void getdata(void);
		void putdata(void);
		void add(total,total);
};
void total::getdata(void)
{
	cout<<"Enter No.";
	cin>>n;
}
void total::putdata(void)
{
	cout<<n<<endl;
}
void total::add(total x, total y)
{
	n = x.n + y.n ;
}
int main()
{
	total r , s, result;
	r.getdata();
	s.getdata();
	cout<<"Value of A: ";
	r.putdata();
	cout<<"Value of B: ";
	s.putdata();
	result.add(r,s);
	cout<<"Result of additon of A and B is equals to: ";
	result.putdata();
	return 0;
}
