
#include <stdio.h>

//Recursion. Calculate the Sum of First 10 Natural Numbers.

int fun(int);
int fun(int a)
{
    int s;
    if(a==1)
        return a;
    s=a+fun(a-1);
    return s;
}
int main()
{
    int k;
    k=fun(10);
    printf("%d\n",k);

}
