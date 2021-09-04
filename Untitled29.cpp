  #include <iostream>
using namespace std;
class shape
{
int l,w;
public:
int getlength(){
cout<<"enter  length"<<endl;
cin>>l;
return l;
}
int getwidth()
{
cout<<"enter  width"<<endl;
cin>>w;
return w;
}


};
class rectangle:public shape
{
int ar1;
public:
void brlw()
{
ar1=getlength()*getwidth();
cout<<" rectangle ="<<ar1<<endl;
}
};
class square:public shape
{
int ar2;
public:
void arl()
{
ar2=getlength()*getlength();
cout<<" square="<<ar2<<endl;
}
};
int main()
{
rectangle s;
s.brlw();
square r;
r.arl();
return 0;
}
