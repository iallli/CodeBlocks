#include <stdio.h>

void main(){

//Decision Control Instructions.
//if-else if-else

int a=6,b=5;

if(a>b){
    printf("A is Greater.\n");
}
else if (a<b){
    printf("B is Greater.\n");
}
else{
    printf("A and B are Equal.\n");
}






//Conditional Operator.

(a > b)     ? printf("a is greater than b = %d > %d",a,b)
            : printf("b is greater than a = %d > %d",b,a);
}
