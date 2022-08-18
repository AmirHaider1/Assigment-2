//WAP to input three digit number and dislay the sum of the digits.
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter three digit number\n");
    scanf("%d",&a);
    
       b=a%10;
       a=a/10;
       c=a/10;
       d=a%10;

        printf("The sum of digit is %d",b+c+d);
        return 0;  
}