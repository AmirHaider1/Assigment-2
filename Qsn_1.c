// WAP to print unit digit of a given number.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    a=a%10;
    printf("Unit digit is %d",a);
    return 0;

}