#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int tot;

    printf("Addition................! \n");
    printf("Enter 1st Number : ");
    n1 = getc(stdin);

    printf("\n Enter 2nd Number : ");
    n2 = getc(stdin);

    tot = n1 + n2;

    printf("\n Total is = ");
    putc(tot,stdout);


    printf("Testing............!!!!!!!!\n");


    return 0;
}
