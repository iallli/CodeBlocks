#include <iostream>
using namespace std;

//Encapsulation.
struct demo{

private:
    int a;
    char b;

public:
    void input(){
    cout << "Enter 2 values." <<endl;
    cin >> a >> b;
}

    void display(){
    cout <<"Values are \n"<< a <<"\n"<< b;
}
};



int main() {
    demo d2;
    d2.input();
    d2.display();
    return 0;
}
