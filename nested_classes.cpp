#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    int rollNo;
    char name[20];
public:
    void setRollNo(int r){rollNo=r;}
    void setName(char *n){strcpy(name,n);}

    class Address
    {
    private:
        int houseNo;
        char street[20];
        char city[20];
        char state[20];

    public:
        void setAddress(int h, char *s, char *c, char *st)
        {
            houseNo=h;
            strcpy(street,s);
            strcpy(city,c);
            strcpy(state,st);
        }
        void showAddress()
        {
            cout<<houseNo<<" "<<endl;
            cout<<street<<" "<<endl;
            cout<<city<<" "<<endl;
            cout<<state<<" "<<endl;
        }
    };
    Address add1;
    public:
        void setAddress(int h, char *s, char *c, char *st)
        {
            add1.setAddress(h,s,c,st);
        }
        void showStudent()
        {
            cout<<"Student Data."<<endl;
            cout<<rollNo<<" "<<endl;
            cout<<name<<" "<<endl;
            add1.showAddress();

        }

};


int main()
{
    Student::Address a1;
    Student s1;
    s1.setRollNo(100);
    s1.setName("Ali");
    s1.setAddress(1,"A","B","C");
    s1.showStudent();
}
