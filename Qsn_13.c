//WAP to take a three digit number from the user and rotate its digit by one position towards the right.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enetr a three digit number\n");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    printf("The number is %d%d",b,c);
    return 0;    
}