/*Program(16)-> Write a program to generate the multiplication table of any nnumber using while loop , do while loop and for  loop.
Solution(3): using for loop */

#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter the number :");
    scanf("%d",&num);

    printf("\n Multiplication Table of %d\n",num);

    for(i=1;i<=10;i++)
    { 
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return  0;
    
}
