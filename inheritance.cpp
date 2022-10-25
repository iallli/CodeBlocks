/*

class car{
    //Properties:
    int price,capacity;
    char fuel_type,engine,color;

    //Methods:
    void setPrice();
    void fuelType();
    void setEngine();
    void setColor();
    void setCapacity();
};

//Single Inheritance.
class superCar: public car{
    //Properties:
    char alarm,navigator,safeGaurd;

    //Methods:
    void setAlarm();
    void setNavigator();
    void setGaurd();

};


//Multilevel Inheritance.
class xyz: public superCar{

};
//Multiple Inheritance.
class abc: public car,public superCar{

};
//Hierarchical Inheritance.
class jkl: public superCar{

};


*/




#include <iostream>
using namespace std;

//Visibility Modes.
class car
{
private:
    int a;
protected:
    void setvalue(int k)
    {
        a=++k;
        cout <<a<<endl;
    }
};

//Is-a Relationship.
class sports_car:public car
{
    public:
    void setdata(int x)
    {
        setvalue(x);
    }
};




class Array
{
private:
    int arr[5]={1,2,3,4,5};
public:
    void Insert(int index, int value)
    {
        arr[index]=value;
        cout<<"\n"<<value<<"="<<index<<endl;
        cout<<arr[++index]<<"="<<index<<endl;
    }
};



class Stack: public Array{
    int index=0;
public:
    void push(int value=0)
    {
        cout<<"Pushing Value = 5 at index = 0."<<endl;
        Insert(index,value);
    }
};



int main(){
    sports_car obj;
    obj.setdata(5);

    Stack s1;
    s1.push(55);
    s1.Insert(2,56);
    return 0;
}
