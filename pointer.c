#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *Add(int *x, int *y)
{
    int *c=(int *)malloc(sizeof(int));
    *c=(*x)+(*y);
    return c;
}

int add(int a, int b)
{
    return a+b;
}

void hello(char *name)
{
    printf("Hello %s\n",name);
}

void Ali()
{
    printf("Hello ALI.\n");
}

void Hello(void (*ptr)())
{
    ptr();
}

int compare(int a, int b)
{
    if(a<b) return 1;
    else
        return -1;
}
void Sort(int A[], int size,int(*compare)(int,int))
{
    for(int i=0;i<size;i++)
        for(int j=0;j<size-1;j++)
            if(compare(A[j],A[j+1])>0)
                {
                    int temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                }

}

int Compare(const void* a,const void* b)
{
    int A = *((int*)a);
    int B = *((int*)b);
    return abs(A)-abs(B); //A-B;    B-A
}


int main()
{
    Hello(Ali); //Ali is callback function.


    int arr[]={-31,22,-1,50,-6,4};
    //Sort(arr,5,compare);

    qsort(arr,6,sizeof(int),Compare);
    for(int i=0;i<6;i++)
        printf("%d ",arr[i]);
    /*
    void (*ptr1)(char*);
    ptr1=hello;
    ptr1("Ali");

    int c;  //Functions Pointers.
    int (*p)(int,int);
    p=add;  //p=&add;
    c=p(2,3); //c=(*p)(2,3);
    printf("Sum = %d\n",c);


    int a=5,b=10;
    int *ptr=Add(&a,&b);
    printf("Sum = %d\n",*ptr);

    */

    /*

    printf("Value of a = %d\n",a);
    printf("Address of a = %d\n",&a);
    printf("Value of b = %d\n",b);
    printf("Address of b = %d\n",&b);

    int *ptr=&a;   //Declare. Initialization.


    printf("\nValue of ptr = %d\n",*(ptr));
    printf("ptr points to address = %d\n",ptr);
    printf("Address of ptr = %d\n",&ptr);

    char *ptr2=(char*)ptr; //Typecasting.
    printf("\nptr2 points to %d = %d\n",ptr2,*ptr2);
    printf("Address %d of ptr2 = %d\n",ptr2+1,*(ptr2+1));
    printf("Address of ptr2 = %d\n",&ptr2);

    void **ptr3=&ptr2; //Void Pointer.
    printf("\nValue of ptr3 = %d\n",*(ptr3));
    printf("ptr3 %d points to address = %d\n",&ptr3,ptr3);



    ptr=&b;     //Initialization.
    printf("\nValue of ptr = %d\n",*(ptr));
    printf("ptr points to address = %d\n",ptr);
    printf("Address of ptr = %d\n",&ptr);

    int **ptr1=&ptr;
    **(ptr1)=*ptr+6; //Changing Value.
    printf("\nValue of ptr1 = %d\n",**(ptr1));
    printf("ptr1 points to  = %d\n",*(ptr1));
    printf("ptr1 points to  = %d\n",ptr1);
    printf("Address of ptr1 = %d\n",&ptr1);

    printf("\n");
    int arr[]={1,2,3,4,5};
    int i=0;
    while(i<5){
    printf("%d\n",arr[i]);
    i++;
    }

    printf("\n");
    int j=0;
    int *array;
    array=arr;

    printf("Address %d = %d\n",arr+0,&arr[0]);
    printf("Value %d = %d\n\n",*arr,arr[0]);


    while(j<5){
    printf("%d\n",*(arr+j));
    printf("%d\n",arr+j);




    j++;
    }
    */

}
