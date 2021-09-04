 #include<iostream>
using namespace std;
class person
{
	private:
		char name[100];
		int age;
	public:
		void getdata(void)
		{
			cout<<"Enter Name:";
			cin>>name;
			cout<<"Enter Age:";
			cin>>age;
		}
		void putdata(void)
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
		}
		 
};










class student : private person
{
	private:
		int roll;
		//void getdata(void);
	     //void putdata(void);
		 
	 
	protected:
		int r[4];
	public:
		void getdata1(void)
		{
			cout<<"Enter Roll:";
			cin>>roll;
		}
		void putdata1(void)
		{
			cout<<"Roll:";
		}
		void get(void)
		{
			for(int i=0;i<5;i++)
		     {
			     cout<<"Enter Marks for sub"<<(i+1);
			     cin>>r[i];
		     }
		}
		void put(void)
		{
			for(int i=0;i<5;i++)
		     {
			     cout<<"Marks for sub"<<(i+1);
			     cout<<r[i];
		     }
		}
		void ret1(void)
		{
			return(getdata());
		}
		void ret2(void)
		{
			return(putdata());
		}
		
		
		
		
};














class result: public student
{
	private:
		int average;
		 
		 
	//protected:
		//int r[4];
	public:
		//void getdata1(void);
		//void putdata1(void);
		//void get(void);
		//void put(void);
		//void ret1(void);
		//void ret2(void);
		int avg(void)
		{
			for(int i=0;i<5;i++)
			{
				average= r[i]/5;
			}
			return(average);
		}
		void disp(void)
		{
			void ret1(void);
			void getdata1(void);
			void get(void);
			void ret2(void);
			void putdata1(void);
			void put(void);
		}
};











int main()
{
	result z;
	z.disp();
	
	return 0;
}
