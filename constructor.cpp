#include <iostream>
using namespace std;

/*
Constructor is a member function of a class.
Class and Constructor name must be same.
It has no return type.
It must be an instance member function, it can never be static.
Constructor is implicitly invoked when an object is created.
Constructor is used to solve problem of initialization.

class A{
public:
    A(int x){a=k}
};
class B{
public:
    B():A(5)
    {
    }
};
void main()
{
B obj(5);
}


Destructor is used to release the resource memory of an object.



*/

class Complex
{
private:
    int a,b;
public:

    Complex(int x, int y)//Constructor makes an object a object.
    {
        a=x;b=y;
        cout <<"a = "<<a<<"\n"<<"b = "<<b;
    }
    Complex(int x)//Constructor makes an object a object.
    {
        a=x;
        cout <<"\n\na = "<<a<<"\n"<<"b = "<<b<<"\n";
    }
    Complex()//Constructor makes an object a object.
    {
        cout <<"\na = "<<a<<"\n"<<"b = "<<b;
    }
    Complex(Complex &obj)
    {
        a=obj.a;
        b=obj.b;
        cout <<"\n\na = "<<a<<"\n"<<"b = "<<b;

    }
};

int main()
{
    Complex c1(5,9),c2(10),c3,c4(c1);
    return 0;
}
