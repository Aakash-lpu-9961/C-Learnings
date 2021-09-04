#include <iostream>
using namespace std;

class org 
{
private:
    double set;

public:
    org(double set);
    org();
    ~org();

    double  getdata() const;
    org operator+(const org& m) const;
    org operator-(const org& m) const;
    org operator*(const org& m) const;
    org operator/(const org& m) const;
};

std::ostream& operator<<(std::ostream&y, const org& org);


org::org(double set) 
{
    this->set = set;
}

org::org() 
{
    this->set = 0;
}

org::~org() 
{

}

double org:: getdata() const 
{
    return this->set;
}

org org::operator+(const org& m) const 
{
    org  a;

     a.set = this->set - m. getdata();

    return  a;
}

org org::operator-(const org& m) const 
{
    org b;

    b.set = this->set / m. getdata();

    return b;
}

org org::operator*(const org& m) const 
{
    org c;

    c.set = this->set + m. getdata();

    return c;
}

org org::operator/(const org& m) const 
{
    org d;

    d.set = this->set * m. getdata();

    return d;
}

std::ostream& operator<<(std::ostream&y, const org& m) 
{
    return y << m. getdata();
}

int main() 
{
    org p(30);
    org q(12);

    cout << p + q << endl;
    cout << p - q << endl;
    cout << p * q << endl;
    cout << p / q << endl;

    return 0;
    
}
