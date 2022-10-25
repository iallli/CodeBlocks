#include <iostream>
using namespace std;
class A
{
public:
    void f1(){}
    void f2(){}//Function Overloading. for function overloading both functions should be in same class, not in 2 different classes.
    void f2(int x){}
    void f3(){}
};
class B: public A
{
public:
    //Overriding is used when the Child wants to change/modify any defination in Parent
    void f1(){} //Method Overriding. prototype,arguments,name is same but coding is different.
    void f3(int x){}//Method Hiding.
};

class Car{
public:
    void shiftGear(){cout<<"Car"<<endl;}
};
class SuperCar:public Car{
public:
    void changeGear(){cout<<"Super Car"<<endl;}
    void shiftGear(){cout<<"Super Car"<<endl;}

};



int main()
{

    /*
    obj.f1(); //B => Early Binding. Compiler see the "TYPE of the OBJECT which is calling that function." in our case it is B so it will see the B for f1() not A.
    obj.f3(); //error => Early Binding.
    obj.f3(5);//B => Early Binding.
    */
    Car obj;
    obj.shiftGear();

    SuperCar obj1;
    obj1.shiftGear();
    obj1.changeGear();

    return 0;
}

