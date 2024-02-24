#include <stdio.h>
#include <stdlib.h>

int swap(int *a, int *b)
{
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 4,b=5;
    swap(&a,&b);
    printf("The result of swapping a=%d , b= %d",a,b);
}
