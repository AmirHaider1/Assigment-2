/*WAP to input a number from the user and also input a digit.
Append a digit in the number and print the number.*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 1st number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    a=a*10;
    b=a+b;
    printf("The number is %d",b);
    return 0;
    
}