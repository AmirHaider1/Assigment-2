//WAP to swap to int variable without using third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    printf("Before swapping value is %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The first value is %d after swapping\n",a);
    printf("The second value is %d after swapping\n",b);
    return 0;
}
