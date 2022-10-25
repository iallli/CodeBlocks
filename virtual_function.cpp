#include <iostream>
using namespace std;

class A
{
public:
    //void fun(){cout<<"A"<<endl;}
    virtual void fun(){cout<<"A"<<endl;} // Late Binding.
};
class B: public A
{
public:
    void fun(){cout<<"B"<<endl;}
};





int main()
{

A *ptr, a1;
B ptrB;
ptr=&ptrB;
ptr->fun();

return 0;
}
