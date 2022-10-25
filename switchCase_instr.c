#include <stdio.h>

void main(){
char a;
printf("Enter a Number.\n");
scanf("%c",&a);

switch(a)
{
case 'a':
    {
        printf("Case a.\n");
        break;
    }
case 'A':
    {
        printf("Case A.\n");
        break;
    }
default:
    {
        printf("Default.");
    }
}
}
