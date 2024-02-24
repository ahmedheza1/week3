#include <stdio.h>
#include <stdlib.h>

int fibo(int n)
{
    if(n==0)
        return 0;
    else
    {
        return 1 + fibo(n - 1);
    }
}
int main()
{
    printf("%d",fibo(5));
    return 0;
}

