//WAP to swap value of to int variables.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The first number is %d after swapping\n",a);
    printf("The second number is %d after swaping",b);
    return 0;
}