// Program(12)-> Write a program to determine whether a givenn number is positive , negative, or zero.


#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number");
    scanf("%d",&num);

    if(num>0)
    printf("The number us positive");

    else if(num<0)
    printf("The number is negative");

    else
    printf("The number is zero");

    return 0;
}
