#include <iostream>
using namespace std;

class Complex{
private:
    int a,b;

public:
    void setdata(int x,int y){a=x;b=y;}     //member functions.
    void showdata(){cout <<"\na = "<<a<<"\n"<<"b = "<<b;}

    friend void dis(Complex);
    Complex add(Complex c2){Complex temp;temp.a=a+c2.a;temp.b=b+c2.b;return temp;};
    friend Complex operator +(Complex,Complex);
    friend Complex operator -(Complex);
};
void dis(Complex c)
{
    cout<<"\n1st Sum = "<<c.a+c.b;
}
Complex operator -(Complex c1)
{
    Complex temp;
    temp.a=-c1.a;
    temp.b=-c1.b;
    return temp;

}
Complex operator +(Complex X, Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;

}


class B;
class A{
private:
    int a;
public:
    void setdata(int x){a=x;}     //member functions.
    void showdata(){cout <<"a = "<<a;}
    friend void dis1(A,B);
};
class B{
private:
    int b;
public:
    void setdata(int y){b=y;}     //member functions.
    void showdata(){cout <<"\nb = "<<b;}
    friend void dis1(A,B);
};
void dis1(A o1, B o2)
{
    cout << "\n2nd Sum = "<<o1.a+o2.b;
}



int main()
{
    Complex c1,c2,c3,c4,cx,cy;
    c1.setdata(5,5);
    c1.showdata();
    //
    dis(c1);
    cout<<"\n";
    cout<<"\n";

    A obj1;
    obj1.setdata(9);
    obj1.showdata();
    B obj2;
    obj2.setdata(9);
    obj2.showdata();
    //
    dis1(obj1,obj2);
    cout<<"\n";

    //Overloading of Operators as a friend function.
    c2.setdata(9,9);
    c2.showdata();
    c3.setdata(1,1);
    c3.showdata();
    //
    cout<<"\n";
    c4=c2+c3;
    c4.showdata();
    cout<<"\n";

    //
    cx=-c4;
    cx.showdata();
    cout<<"\n";

    //
    cy=cx.add(cx);
    cy.showdata();
    cout<<"\n";



    return 0;
}
