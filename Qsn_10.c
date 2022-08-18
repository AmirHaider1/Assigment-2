//WAP to make the last digit of number stored in variable is zero.
#include<stdio.h>
int main()
{
    int i,s;
    printf("Enter a number\n");
    scanf("%d",&i);
    s=i%10;
    s=i-s;
    printf("%d",s);
    return 0;
}