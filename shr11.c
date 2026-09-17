// Program(11)-> Write a program to check whether a given number is even or odd.

#include<stdio.h>
int main ()
{
    int num;
    printf("Enter The Number");
    scanf("&d",&num);

    if (num % 2 == 0)
    {
        printf("The number is even");
    }
     else
     {
        printf("The number is odd");
     }
     return 0; 
}
