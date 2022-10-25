#include <iostream>
using namespace std;

/*
struct Complex{
private:
    int a,b;
public:
    void setdata(int x,int y){a=x;b=y;}     //member functions.
    void showdata(){cout <<"a = "<<a<<"\n"<<"b = "<<b;}
};
*/

/*
class Complex{
private:
    int a,b;
public:
    void setdata(int,int);
    void showdata(){cout <<"a = "<<a<<"\n"<<"b = "<<b;}
};
void Complex::setdata(int x, int y)
{
    a=x;b=y;
}
*/

class Complex//Class is a description of the object.
{

private://Instance Member Variables.
    int a,b;

public://Instance Member Functions.
    void setdata(int x,int y){a=x;b=y;}
    void showdata(){cout <<"a = "<<a<<"\n"<<"b = "<<b;}
    Complex add(Complex c){Complex temp;temp.a=a+c.a;temp.b=b+c.b;return temp;}

};



int main(){
    Complex c1,c2,c3; // "c1" is an Object. Object is an instance of a class.
    c1.setdata(3,4);
    c2.setdata(5,6);//Object State.
    c3=c1.add(c2);
    c3.showdata();
    return 0;
}
