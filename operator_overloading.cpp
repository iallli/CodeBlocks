#include <iostream>
using namespace std;

class Complex{
private:
    int a,b;
public:
    void setdata(int x,int y){a=x;b=y;}     //member functions.
    void showdata(){cout <<"\na = "<<a<<"\t"<<"b = "<<b;}

    Complex add(Complex c){Complex temp;temp.a=a+c.a;temp.b=b+c.b;return temp;}

    Complex operator +(Complex c){Complex temp;temp.a=a+c.a;temp.b=b+c.b;return temp;}

    Complex operator -(){Complex temp;temp.a=-(a);temp.b=-(b);return temp;}

};

class Integer{
private:
    int a;

public:
    void setdata_1(int x){a=x;}
    void showdata_1(){cout <<"\na = "<<a;}

    Integer operator ++(){Integer temp;temp.a=++a;return temp;}
    Integer operator ++(int){Integer temp;temp.a=a++;return temp;}

    Integer operator --(){Integer temp;temp.a=--a;return temp;}
    Integer operator --(int){Integer temp;temp.a=a--;return temp;}

};


int main(){
    Complex c1,c2,c3,c4,c5; // "c1" is an Object. Object is an instance of a class.
    c1.setdata(3,4);
    c2.setdata(5,6);//Object State.
    c3=c1.add(c2);
    c3.showdata();
    c4=c1+c2; //Binary Operator Overloading. When an operator is overloaded with multiple jobs, it is known as operator overloading. It is a way to implement compiler time polymorphism.
    c4.showdata();
    c5=c1.operator-(); //Unary Operator Overloading.
    c5.showdata();

    Integer i1,i2;
    i1.setdata_1(5);
    i1.showdata_1();
    i2=i1--;
    i1.showdata_1();
    i2.showdata_1();



    return 0;
}
