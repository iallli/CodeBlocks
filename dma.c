#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    int *P=(int *)malloc(sizeof(int));
    *P=10;
    printf("Value = %d and Address = %d=%d\n",*P,P,P+1);

    P=(int *)malloc(sizeof(int));
    *P=20;
    printf("Value = %d and Address = %d=%d\n",*P,P,P+1);

    P=(int *)malloc(5*sizeof(int));
    *P=30;
    *(P+1)=40;
    *(P+2)=50;
    *(P+3)=60;
    *(P+4)=70;
    *(P+5)=80;
    printf("Value = %d and Address = %d=%d\n",P[0],P,P);
    printf("Value = %d and Address = %d=%d\n",P[1],P,P+1);
    printf("Value = %d and Address = %d=%d\n",P[2],P,P+2);
    printf("Value = %d and Address = %d=%d\n",P[3],P,P+3);
    printf("Value = %d and Address = %d=%d\n",P[4],P,P+4);
    printf("Value = %d and Address = %d=%d\n",P[5],P,P+5);

    int size;
    printf("Enter the size of Array.\n");
    scanf("%d",&size);
    int *A=(int *)malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
    {
        A[i]=i+1;
        printf("Value = %d and Address = %d\n",A[i],A+i);
    }

    printf("\n\n");
    int *B=(int *)calloc(size,sizeof(int));
    for(int i=0;i<size;i++)
    {
        printf("Value = %d and Address = %d\n",B[i],B+i);
    }

    printf("\n\n");
    int *C=(int *)realloc(A,2*size*sizeof(int));
    for(int i=0;i<2*size;i++)
    {
        printf("Value = %d and Address = %d\n",C[i],C+i);
    }
    free(P);
    free(A);
    free(B);
    free(C);

    //int *A = (int *)realloc(A,0); => free(A)
    //int *B = (int *)realloc(NULL,size*sizeof(int)); => malloc()




}
