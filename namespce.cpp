#include<iostream>
using namespace std;//cin, cout declaration is in "std".

namespace MySpace//Namespace is a Group of Declaration.
{
    int a;
    int f1();
    class A
    {
    public:
        void fun1();
    };
}



int MySpace::f1(){cout<<"F1"<<endl;}
void MySpace::A::fun1(){cout<<"Fun1";}
using namespace MySpace;


int main()
{
    cout<<"Hello Std"<<endl;
    a=5;
    f1();
    A obj;
    obj.fun1();
}
