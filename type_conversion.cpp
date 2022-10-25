#include<iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    Complex(){}
    Complex(int k){a=k;b=0;}
    operator int()
    {
        return a;
    }

    void setData(int x, int y)
    {
        a=x;b=y;
    }
    void showData()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }


};


class Item
{
private:
    int m,n;
public:
    void setM(int x){m=x;}
    void setN(int y){n=y;}
    void showData()
    {
        cout<<m<<endl;
        cout<<n<<endl;
    }

    /*

    Item(){}
    Item(Product p)
    {
        a=p.getM();
        b=p.getN();

    }
    */

};





class Product
{
private:
    int a,b;
public:
    int getA(){return a;}
    int getB(){return b;}
    void setData(int x, int y)
    {
        a=x;
        b=y;
    }
    operator Item()
    {
        Item temp;
        temp.setM(a);
        temp.setN(b);
        return temp;
    }
};



int main()
{
    Complex c1;
    float x=5.5;
    int y=x;//Automatic Type Conversion.
    c1=y; //Coversion=>Primitive Type -> Class Type.
    c1.showData();
    int z;
    z=c1;//Coversion=>Class Type -> Primitive Type.
    cout<<"\n"<<z<<endl;
    //Coversion=>Class Type -> Class Type.
    Product p1;
    p1.setData(4,3);
    Item i1;
    i1=p1;
    i1.showData();



    return 0;
}
