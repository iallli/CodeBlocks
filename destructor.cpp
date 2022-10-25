#include <iostream>
using namespace std;

/*
Destructor is an instance member function of a class.
Name is same as class name but including this symbol "~"
Can never be static.
No return type.
Takes no argument, overloading is not possible.
Invoked when object is going to destroy.
Should be defined to release resources allocated to an object.


class Complex
{
private:
    int a,b;
public:
    Complex()
    {cout <<"Constructor.";}

    ~Complex()
    {cout <<"\nDestructor.";}

};
*/

class A
{
    int a;
public:
    A(int k)
    {
        a=k;
        cout<<"A = "<<a<<endl;

    }
    ~A()
    {
        cout<<"A-Destructor."<<endl;
    }
};

class B:public A
{
    int b;
public:
    B(int x, int y):A(x)
    {
        b=y;
        cout<<"B = "<<b<<endl;
    }
    ~B()
    {
        cout<<"B-Destructor."<<endl;

    }
};






int main()
{
    B obj(2,3);

    return 0;
}
