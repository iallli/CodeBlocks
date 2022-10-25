#include<iostream>
#include<array>
#include<tuple>
#include<vector>
#include<list>
#include<map>
#include<string>
#include<string.h>
#include<strings.h>



using namespace std;


class Student
{
private:
    string name;
    int age;
public:
    void setStudent(string s, int a)
    {
        name=s;age=a;
    }
    void showStudent()
    {
        cout<<"("<<name<<",";
        cout<<age<<")"<<endl;
    }
};
int main()
{
    //Array in STL.
    array <int,5> int_arr={1,2,3,4,5};
    array <float,5> float_arr={1.1,2.2,3.3,4.4,5.5};
    array <char,5> char_arr={'A','B','C','D','E'};
    array <char,5> char_arr1;
    array <string,5>str_arr={"Hafiz","Muhammad","Ahmad","Fareed","Ali"};
    //at,[],front,back,
    cout<<str_arr.at(0)<<" ";
    cout<<float_arr[0]<<" ";
    cout<<char_arr.front()<<" ";
    cout<<char_arr.back()<<endl;
    //fill,
    char_arr1.fill('Z');
    //swap
    //swap(char_arr,char_arr1);
    char_arr.swap(char_arr1);
    for(int i=0;i<5;i++)
        cout<<char_arr[i];
    cout<<"\n";
    for(int i=0;i<5;i++)
        cout<<char_arr1[i];
    //size
    cout<<"\n";
    cout<<sizeof(char_arr1)<<endl;
    cout<<char_arr1.size()<<endl;
    cout<<"\n";





    //Pair in STL.
    pair <int,float> p1;
    p1=make_pair(1,1.5);
    cout<<p1.first<<" ";
    cout<<p1.second<<endl;

    pair <char,string> p2;
    p2=make_pair('A',"Ahmad");
    cout<<p2.first<<" ";
    cout<<p2.second<<endl;

    pair <int,Student> p3;
    Student s1;
    s1.setStudent("Ali",29);
    p3=make_pair(5,s1);
    cout<<p3.first<<" ";
    s1=p3.second;
    s1.showStudent();
    cout<<"\n";







    //Tuple
    tuple <int,float,char> t1;
    t1=make_tuple(1,1.1,'A');

    cout<<get<0>(t1)<<" ";
    cout<<get<1>(t1)<<" ";
    cout<<get<2>(t1)<<endl;

    cout<<"\n";






    //Vector
    vector <int>v{1,2,3,4,5};
    for(int i=0;i<5;i++)
        cout<<v[i];

    vector <int>iv;
    cout<<"\nCapacity of iv = "<<iv.capacity()<<endl;
    cout<<"Size of iv = "<<iv.size()<<endl;

    iv.push_back(10);
    iv.push_back(20);
    iv.push_back(30);
    for(int i=0;i<iv.size();i++)
        cout<<iv[i];
    cout<<"\nCapacity of iv = "<<iv.capacity()<<endl;
    cout<<"Size of iv = "<<iv.size()<<endl;

    iv.pop_back();
    for(int i=0;i<iv.size();i++)
        cout<<iv[i];
    cout<<"\nCapacity of iv = "<<iv.capacity()<<endl;
    cout<<"Size of iv = "<<iv.size()<<endl;

    cout<<"iv[0] = "<<iv.at(0)<<endl;
    cout<<"iv[First] = "<<iv.front()<<endl;
    cout<<"iv[Last] = "<<iv.back()<<endl;

    vector <int>:: iterator it=iv.begin();
    iv.insert(it+1,15);
    for(int i=0;i<iv.size();i++)
        cout<<iv[i];

    cout<<"\n";
    cout<<"Capacity of iv = "<<iv.capacity()<<endl;
    cout<<"Size of iv = "<<iv.size()<<endl;

    iv.clear();
    cout<<"Capacity of iv = "<<iv.capacity()<<endl;
    cout<<"Size of iv = "<<iv.size()<<endl;

    vector <int>iv1(5);
    vector <char>cv(5,'a');

    cout<<"\n";







    //List
    list <int> l1{5,4,3,2,1};
    list <int>::iterator p=l1.begin();
    while(p!=l1.end())
        {
            cout<<*p;
            p++;
        }
    cout<<l1.size()<<endl;

    list <string> l2{"abc","def","ghi","jkl","mno"};
    l2.push_back("pqr");
    l2.push_front("Ali");
    list <string>::iterator ptr=l2.begin();
    cout<<"\n";
    while(ptr!=l2.end())
        {
            cout<<*ptr<<endl;
            ptr++;
        }
    cout<<l2.size()<<endl;
    cout<<"\n";
    l2.pop_front();
    l2.pop_back();
    list <string>::iterator ptr1=l2.begin();
    while(ptr1!=l2.end())
        {
            cout<<*ptr1<<endl;
            ptr1++;
        }
    cout<<l2.size()<<endl;


    l1.sort();
    list <int>::iterator q=l1.begin();
    while(q!=l1.end())
        {
            cout<<*q;
            q++;
        }

    cout<<"\n";
    l1.reverse();
    list <int>::iterator r=l1.begin();
    while(r!=l1.end())
        {
            cout<<*r;
            r++;
        }
    cout<<"\n";

    l1.remove(5);
    list <int>::iterator s=l1.begin();
    while(s!=l1.end())
        {
            cout<<*s;
            s++;
        }
    cout<<"\n";

    l1.clear();
    list <int>::iterator t=l1.begin();
    while(t!=l1.end())
        {
            cout<<*t;
            t++;
        }
    cout<<l1.size()<<endl;








    //Map
    map <int,string> m;
    m[1]="A";
    m[2]="B";
    m[3]="C";
    m[4]="D";
    m[5]="E";

    map <int,string> m1{{1,"A"},{2,"B"},{3,"C"},{4,"D"},{5,"E"}};
    cout<<"\n";
    cout<<"\n";

    //[]
    //size()
    //empty()
    //insert()
    //clear()

    cout<<m1.at(1)<<endl;
    cout<<m1[1]<<endl;
    map<int,string>::iterator it1=m1.begin();
    while(it1!=m1.end())
    {
        cout<<it1->first<<"=";
        cout<<it1->second<<endl;
        it1++;

    }
    cout<<"Size = "<<m1.size()<<endl;
    cout<<"Empty = "<<m1.empty()<<endl;
    m1.insert(pair<int,string>(6,"F"));

    map<int,string>::iterator it2=m1.begin();
    while(it2!=m1.end())
    {
        cout<<it2->first<<"=";
        cout<<it2->second<<endl;
        it2++;

    }
    cout<<"Size = "<<m1.size()<<endl;
    m1.clear();
    map<int,string>::iterator it3=m1.begin();
    while(it3!=m1.end())
    {
        cout<<it3->first<<"=";
        cout<<it3->second<<endl;
        it3++;

    }
    cout<<"Size = "<<m1.size()<<endl;
    cout<<"\n";





    //String
    string name="Hafiz";
    char greet[]="Hello";

    string st;
    st=greet;
    cout<<st<<endl;

    st=st+name+"Ahmad";
    cout<<st<<endl;

    string nt=st+'5';
    cout<<nt<<endl;

    cout<<"Enter a string."<<endl;
    cin>>nt;
    cout<<"Hello,"<<nt<<endl;

    name.assign("Ali");
    cout<<name<<endl;

    name.append(" Fareed");
    cout<<name<<endl;

    name.insert(1,"E");
    cout<<name<<endl;

    name.replace(0,0,"A");
    cout<<name<<endl;

    string strf="Hello Ali Ali how are you?";
    int i=strf.find("Ali");
    cout<<i<<endl;
    int j=strf.rfind("Ali");
    cout<<j<<endl;

    string name1="Ahmad";
    string name2="Ahmad";

    int k=name1.compare(name2);
    cout<<k<<endl;

    string ss="Hello";
    char sst[20];
    strcpy(sst,ss.c_str());
    cout<<sst<<endl;
    cout<<ss.size();

    name.erase();





    cout<<"\n";


}
