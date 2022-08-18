// WAP to print a given number without its last digit
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    a=a/10;
    printf("Digit is %d without last digit",a);
    return 0;
}