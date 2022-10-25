#include<stdio.h>

union demo{
   	char z;
	int x;
};
void input(union demo *ptr){
    scanf("%d",ptr);
}
void display(union demo *itm){
    printf("\n");
    printf("a = %d\n",itm->x);
    printf("a's address = %x\n",&itm->x);
    printf("size of a = %d\n",sizeof(itm->x));

    printf("\n");
    printf("b = %c\n",itm->z);
    printf("b's address = %x\n",&itm->z);
    printf("size of b = %d\n",sizeof(itm->z));

    printf("\n");
    printf("size of union = %ld\n",sizeof(itm));

}
struct store{
    double price;
    union{
        struct{
            char *title;
            char *author;
            int num_pages;
        }book;
        struct{
            char color;
            char size;
            char *design;
        }shirt;
    }item;
};
typedef union{
    int a;
    char b;
    char *c;
}data;
struct point{
    int x;
    int y;
};
struct triangle{
    struct point uper_left;
    struct point bottem_right;
};
void area(struct triangle r){
    int length;
    int width;

    length = r.bottem_right.x - r.uper_left.x;
    width = r.uper_left.y - r.bottem_right.y;
    printf("Area = %d\n",length*width);
}
int main()
{
    struct triangle r;
    r.uper_left.x=3;
    r.uper_left.y=8;
    r.bottem_right.x=14;
    r.bottem_right.y=2;
    area(r);

    data arr[1];
    arr[0].a=5;
    arr[1].b='A';
    arr[2].c="Ali";
    printf("%d\t",arr[0]);
    printf("%c\t",arr[1]);
    printf("%s\t\n",arr[2]);

    struct store str;
    str.item.book.title="ABC";
    str.item.book.author="XYZ";
    str.item.book.num_pages=100;
    printf("Book.\n");
    printf("title = %s\t",str.item.book.title);
    printf("author = %s\t",str.item.book.author);
    printf("total pages = %d\t",str.item.book.num_pages);

    printf("\n\n");

    struct store str1;
    str1.item.shirt.color='B';
    str1.item.shirt.size='L';
    str1.item.shirt.design="XYZ";
    printf("Shirt.\n");
    printf("color = %c\t",str1.item.shirt.color);
    printf("size = %c\t",str1.item.shirt.size);
    printf("design = %s\t",str1.item.shirt.design);

    union demo itm;
    input(&itm);
    display(&itm);
    return 0;

}
