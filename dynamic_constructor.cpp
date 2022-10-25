#include<iostream>
using namespace std;
class A
{
private:
    int a,b,*p;
public:
    A(){
        a=0;
        b=0;
        p=new int;
        }
    A(int x, int y, int z)
    {
    a=x;
    b=y;
    p=new int;
    *p=z;
    cout<<a<<b<<*p;
    }
};

int main()
{
    A o1,o2(1,2,3);
    return 0;
}
