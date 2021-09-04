#include<iostream>
using namespace std;
class matrix
{
	private:
	          int item[3][3];
	public:
		     void getdata(void);
		     void putdata(void);
		     matrix add(matrix ,matrix);
};
void matrix::getdata(void)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>item[i][j];
		}
	}
	
}
void matrix::putdata(void)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<item[i][j]<<'\t';
		}
		cout<<endl;
	}
}
matrix matrix :: add(matrix m , matrix n)
{
	matrix h;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			 h.item[i][j] = m.item[i][j] / n.item[i][j];
		}
	}
return (h);
}
int main()
{
	matrix a, b, c, result;
	cout<<"Matrix A:\n";
	a.getdata();
	cout<<"Matrix B: \n";
	b.getdata();
	cout<<"Entered Matrix A:"<<endl;
	a.putdata();
	cout<<"Entered Matrix B:"<<endl;
	b.putdata();
	result=c.add(a,b);
	cout<<"Addition Of Matrix A & B:"<<endl;
	result.putdata();
	return 0;
}
