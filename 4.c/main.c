#include <stdio.h>
#include <stdlib.h>

    int login(int,int);
int main()
{
    int email = 123456;
    int password = 789654;
    if(login(email,password)==1)
    {
        printf("successful access");
    }
    else
        printf("failed access");
    return 0;
}
int login(int e , int p)
{
    int password, email;
    printf("Please enter your email: ");
    scanf("%d",&email);
    printf("Please enter your password: ");
    scanf("%d",&password);
    if(email==e && password==p)
        return 1;
    else
        return 0;
}
