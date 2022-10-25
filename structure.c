#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


struct Employee
{
    int id;
    char gender;
    char name[10];
    float salary;
};

void input(int* id, char* gender,char* name[],float* salary)
{
    scanf("%d %c %s %f",id,gender,name,salary);
}

//Passing Structure Variable as an Argument.
void display(struct Employee emp)
{
    printf("\n");
    printf("%d\n",emp.id);
    printf("%c\n",emp.gender);
    printf("%s\n",emp.name);
    printf("%.2f\n",emp.salary);
}

//Passing Structure Members as Arguments.
void display1(int id, char gender, char name[],float salary)
{
    printf("\n");
    printf("%d\n",id);
    printf("%c\n",gender);
    printf("%s\n",name);
    printf("%.2f\n",salary);
}

//Passing Structure Pointer as an Argument.
void display2(struct Employee *ptr)
{
    printf("\n");
    printf("%d\n",ptr->id);
    printf("%c\n",ptr->gender);
    printf("%s\n",ptr->name);
    printf("%.2f\n",ptr->salary);
}

//Returning Structure Variable from Function.
struct Employee edit(struct Employee emp)
{
    (emp.id)++;
    emp.salary=emp.salary + 1000;
    return emp;
}

//Returning a Pointer to a Structure from a Function.
struct Point
{
    int a;
    int b;
};
struct Point *edit1(int x, int y)
{
    struct Point *ptr1=(struct Point *)malloc(sizeof(struct Point));
    ptr1->a=x;
    ptr1->b=y+1000;
    return ptr1;
}
void display3(struct Point *ptr)
{
    printf("\n");
    printf("%d\n",ptr->a);
    printf("%d\n",ptr->b);
}

//Passing Array of Structures as Arguments.
void display4(struct Point arr[])
{
    printf("\n");
    for(int i=0;i<2;i++)
    {
        printf("%d %d\n",arr[i].a,arr[i].b);
    }
}






int main()
{
    struct Employee e1={1,'M',"Ahmad",50000.0};
    struct Employee e2;

    //Passing Structure Variable as an Argument.
    printf("Passing Structure Variable as an Argument.");
    display(e1);
    printf("\n");

    //Passing Structure Members as Arguments.
    printf("Passing Structure Members as Arguments (Call by Value).");
    display1(e1.id,e1.gender,e1.name,e1.salary);
    printf("\n");

    //Passing Structure Members as Arguments.
    printf("Passing Structure Members as Arguments (Call by Reference).\n");
    input(&e2.id,&e2.gender,&e2.name,&e2.salary);
    display2(&e2);

    //Returning Structure Variable from Function.
    e2=edit(e2);
    display(e2);

    //Returning a Pointer to a Structure from a Function.
    struct Point *e3;
    e3=edit1(99,1000);
    display3(e3);
    free(e3);

    //Passing Array of Structures as Arguments.
    struct Point arr[2]={{1,2},{3,4}};
    display4(arr);


    return 0;
}
