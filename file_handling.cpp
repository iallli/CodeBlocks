#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    ofstream fout; // "fout" is Output Stream Object.
    fout.open("myFile.text",ios::ate|ios::app);//Open File.
    cout<<"Current Writing Location = "<<fout.tellp()<<endl;
    //fout<<"Ali.";//Write something in File.
    fout.seekp(2);
    cout<<"Changed Location = "<<fout.tellp()<<"\n";
    fout.close();//close file



    ifstream fin; //Input Stream
    fin.open("myFile.text");//Open File.
    cout<<"Current Reading Location = "<<fin.tellg()<<endl;
    while(!fin.eof())//Space is missed by the compiler, and consider it as a data separator.
        {
            cout<<fin.tellg();
            cout<<"="<<(char)fin.get()<<endl;
        }
    /*
    fin.seekg(0);
    cout<<"\n"<<fin.tellg();
    cout<<"="<<(char)fin.get()<<endl;
    */
    fin.close();//close file

}
