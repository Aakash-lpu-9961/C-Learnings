#include<iostream>
using namespace std;
class matrix
{
	private:
		int item [5][5];
	public:
		void getdata(void);
		void putdata(void);
		matrix add(matrix,matrix);
};
void matrix::getdata(void)
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<"Enter Elements Of Matrix:"<<(i+1)<<endl;
		     cin>>item[i][j];
		}
	}
}
void matrix::putdata(void)
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<item[i][j]<<'\t';
		}
		cout<<endl;
	}
}
matrix matrix::add(matrix m, matrix n)
{
	matrix h;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			h.item[i][j] = m.item[i][j]+ n.item[i][j];
		}
	}
}
int main()
{
	matrix a,b,c,result;
	cout<<"Matrix A:\n";
	a.getdata();
	cout<<"Matrix B:\n";
	b.getdata();
	cout<<"You entered matrix A:\n";
	a.putdata();
	cout<<"You entered matrix B:\n";
	b.putdata();
	result = c.add(a,b);
	cout<<"Addition:\n";
	result.putdata();
	
	return 0;
}
