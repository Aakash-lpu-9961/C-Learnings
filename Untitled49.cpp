//Arrays within class in c++
#include<iostream>
#include<conio.h>
#define SIZE 3
using namespace std;
class student
{
    private:
    int roll[SIZE];
    char name[SIZE][20];
    public:
    void getdata(void);
    void display(void);
};
void student::getdata(void)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout<<"\n Enter Name:";
        cin>>name[i];
        cout<<"Enter ROll:";
        cin>>roll[i];
    }
    
}
void student::display(void)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout<<"\n Name:"<<name[i]<<endl;
        cout<<"\n Roll:"<<roll[i]<<endl;
    }
    
}
int main()
{
    student st;
    st.getdata();
    st.display();
    return 0;
}
