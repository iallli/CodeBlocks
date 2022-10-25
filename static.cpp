#include <iostream>
using namespace std;

void fun()
{
    //Static Local Variable.
    static int x;//memory is allocated to x in the start of program. Memory of x will get destroyed until our program. x copy will remain till the end of the program once it is created. Default value is 0.
    int y;//memory is allocated to y when fun function is called. Memory of y will get destroyed after function execution. If our function is called again and again in the program then the variable y will be created and destroyed again and again. Default value is garbage value.
}

class Account
{
private:
    int balance;//Instance Member Variable.
    static float roi;//Static Member Variable / Class Member Variable. Declared inside the class body.
public:
    void setbalance(int x){balance=x;}     //Instance Member Functions.
    static void setRoi(float r){roi=r;}//Static Member Functions. Class Member Function. Can be invoked with or without the object. Can access only static members of the class.
};

float Account::roi=5.5f;
int main()
{
    Account a1;// "a1" will contain only "balance" variable in it because "roi" will be created only once for the class during program execution.
    a1.setRoi(9.9);
    Account::setRoi(1.1);
    return 0;
}
