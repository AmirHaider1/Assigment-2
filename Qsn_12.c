/*Assume price of 1USD is INR 76.23. 
WAP to take the amount in INR and convert it into ISD.*/

#include<stdio.h>
int main()
{
    float i,usd=76.26,u;
    printf("Enter the amount in INR\n");
    scanf("%f",&i);
    u=i/usd;
    printf("The amount in usd is %f",u);
    return 0;
}