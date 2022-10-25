#include <iostream>
using namespace std;

template<class X> class ArrayList
{
private:
    struct ControlBlock
    {
        int capacity;
        X *arr_ptr;
    };
    ControlBlock *s;
public:
    ArrayList(int capacity)
    {
        s=new ControlBlock;
        s->capacity=capacity;
        s->arr_ptr=new X[s->capacity];
    }

    void addElement(int index, X data)
    {
        if(index>=0 && index<=s->capacity-1)
            s->arr_ptr[index]=data;
        else
            cout<<"Not valid."<<endl;
    }

    int viewElement(int index, X &data)
    {
        if(index>=0 && index<=s->capacity-1)
        {
            data=s->arr_ptr[index];
            cout<<"Data = "<<data<<endl;
        }

        else
            cout<<"Not valid."<<endl;
    }
    void viewList()
    {
        for(int i=0;i<s->capacity;i++)
            cout<<""<<s->arr_ptr[i];
    }
};



int main()
{
    ArrayList <int>list1(5);
    list1.addElement(0,1);
    list1.addElement(1,2);
    list1.addElement(2,3);
    list1.addElement(3,4);
    list1.addElement(4,5);
    int data;
    list1.viewElement(4,data);
    list1.viewList();
    return 0;
}
