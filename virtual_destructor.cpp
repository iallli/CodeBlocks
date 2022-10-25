#include<iostream>
using namespace std;
class A{
private:
    int a;
public:
    void f1(){cout<<"f1";}
    virtual ~A(){}//Destructor
};
class B:public A{
private:
    int b;
public:
    void f2(){cout<<"f2";}
    ~B(){}//Destructor
};
int fun();
int fun()
{
    A *p=new B;
    p->f1();
    p->f2();
    delete p;

}
int main()
{
    fun();
}
