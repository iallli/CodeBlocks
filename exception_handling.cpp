#include<iostream>
using namespace std;


int main()
{
    int i=3;
    cout<<"Welcome.\n";
    try{
        if(i==1)
            throw 1;
        if(i==2)
            throw "hello";
        if(i==3)
            throw 5.5;
    cout<<"\nTry\n";
    }
    catch(...){
    cout<<"Exception no: ";
    }
    cout<<"\nLast Line.";
    return 0;
}
