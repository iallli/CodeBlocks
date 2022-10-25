#include<iostream>
using namespace std;


class Dumy
{
    int a,b;
    const int x;
    int &y;
public:
    Dumy(int &n):x(5),y(n)
    {
        a,b=0;

    }
};


int main()
{

    int m=6;
    Dumy d1(m);
    return 0;

}
