#include<iostream>
using namespace std;

class Dumy
{
private:
    int a,b,*ptr;

public:
    Dumy()
    {
        ptr=new int;
    }
    void setData(int x, int y, int z)
    {
        a=x;b=y;*ptr=z;
    }
    void showData()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<*ptr<<endl;

    }
    Dumy(Dumy &z)//Constructor
    {
        a=z.a;b=z.b;//ptr=z.ptr;//Shallow Copy.
        ptr=new int;
        *ptr=*(z.ptr);//Deep Copy

    }
    ~Dumy()//Destructor
    {
        delete ptr;
    }
};

int main()
{
    Dumy d1;
    d1.setData(4,5,6);
    //How to create copy of an object.
    Dumy d2=d1;//Shallow Copy. Copy Constructor.
    //Dumy d2;
    //d2=d1;//Implicit copy assignment operator.
    d2.showData();

}
