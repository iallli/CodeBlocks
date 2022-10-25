#include <stdio.h>

//User Defined Functions.
//Takes Nothing, Returns Nothing.

void sum(void); //Declaration.
void sum(void)  //Definition.
{
    int a=5,b=5;
    printf("Sum = %d\n",(a+b));
}

//Takes Something, Returns Nothing.

void sum1(int,int);
void sum1(int a,int b) //Formal Arguments. Ordinary Variables. Default Arguments.
{
    printf("Sum-1 = %d\n",(a+b));
}

//Takes Nothing, Returns Something.
int sum2(void);
int sum2(void)
{
    int a=9,b=9;
    return(a+b);
}

//Takes Something, Returns Something.

int sum3(int,int);
int sum3(int a,int b)
{
    return(a+b);
}

void swap(int *, int *);
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


void main(){

//User Defined Functions.

sum();

sum1(2,2); //Actual Arguments.

int res=sum2();
printf("Sum-2 = %d\n",res);

int res1=sum3(100,100);
printf("Sum-3 = %d\n",res1);

int a=6,b=7;
swap(&a,&b);
printf("a = %d and b = %d\n",a,b);

}

