#include <stdio.h>

int main()
{
    int a=1025;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&p);
    printf("%d\n",q);
    printf("%d\n",*q);
    printf("%d\n",**q);
    printf("%d\n",&q);
    printf("%d\n",r);
    printf("%d\n",*r);
    printf("%d\n",**r);
    printf("%d\n",***r);
    printf("%d\n",&r);
}

