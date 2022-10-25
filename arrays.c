#include <stdio.h>
#include <string.h>

//Call by Value.
void display(int [], int);
void display(int A[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",A[i]);
    }
}

//Call by Reference.
int sum(int *, int);
int sum(int *A, int size)
{
    int i=0,total=0;
    while(i < size)
    {
        total+=A[i];
        i++;
    }
    return total;
}


void print(char *);
void print(char *C)
{
    while(*C != '\0')
    {
        printf("%c",*C);
        C++;
    }
    printf("\n\n");
}
//Multidimensional Arrays.
void printB(int *(B)[][3][3]) //
{
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
                printf("%d ",*(B[i][j]+k));
                printf("\n");

        }
        printf("\n");
    }
}

int main()
{
    int A[5]={1,2,3,4,5};
    char C[]="Ali";
    int B[3][3][3]={
                {{1,2,3},{4,5,6},{7,8,9}},
                {{10,11,12},{13,14,15},{16,17,18}},
                {{19,20,21},{22,23,24},{25,26,27}}
                };
    printB(B);
    //printf("\n%d\n",B[0][0]+1);
    //printf("\n%d\n",&B[0][0]);
    //printf("\n%d\n",B[0]);
    //printf("\n%d\n",B);
    //printf("\n%d\n",*B);


    printf("\n");
    print(C);
    int size=sizeof(A)/sizeof(A[0]);
    display(A,size);
    int s=sum(A,size);
    printf("\n%d\n",s);


}
