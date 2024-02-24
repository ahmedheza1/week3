#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q = 5065 ,count= 0 ;
    while(q!=0)
    {
        q = q / 10;
        count++;
    }
    printf("The number of digits = %d",count);
    return 0;
}
