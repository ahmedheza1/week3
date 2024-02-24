#include <stdio.h>
#include <stdlib.h>

int Get_Max(int,int);
int main()
{
    int num1 , num2;
    printf("Please enter 2 number: ");
    scanf("%d %d",&num1,&num2);
    printf("The maximum number is %d",Get_Max(num1 , num2));
}
int Get_Max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
