#include <iostream>
using namespace std;


class Box
{
private:
    int l,b,h;
public:
    //Instance member function
    void setDimension(int x, int y, int z)
    {
        //this->l=x;this->b=y;this->h=z;
        l=x;b=y;h=z;
    }
    //Instance member function
    void showDimension()
    {
        cout<<"\nLength = "<<l<<"\nBreadth = "<<b<<"\nHeight = "<<h<<endl;
    }
};





int main()
{

    Box b1;
    b1.setDimension(12,10,5);
    b1.showDimension();


    Box *ptr;
    ptr=&b1;
    ptr->setDimension(1,1,1);
    ptr->showDimension();

    /*
     THIS-Pointer.
     "this" is a keyword.
     "this" is a local object pointer in every instance member function containing address of the caller object.
     "this" pointer cannot be modified.
     "this" is used to refer caller object in member function.
     */

}
