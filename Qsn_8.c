//WAP to check wheather the given number is odd or even.
#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter a number \n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Even");
    }
    else
        printf("Odd");
        return 0;
}