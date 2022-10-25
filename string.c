#include <stdio.h>
#include <string.h>

void main()
{
    char name[100];
    //gets(name);
    fgets(name,4,stdin);
    printf("%s\n",name);

    int i=0;
    while(name[i]) //    while(name[i]!='\0')
        {
            printf("%c",name[i]);
            i++;
        }
}
