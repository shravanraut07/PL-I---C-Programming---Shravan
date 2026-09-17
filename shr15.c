/*Program(15)-> Write a program to generate the multiplication table of any number using while loop , do while loop, & for loop.
Solution(2): Using  do - while loop*/


    #include<stdio.h>
    int main()
        {
            int num,i;

            printf("Enter a number: ");
            scanf("%d",&num);

            printf("\n Multiplication Table of %d\n",num);

           for (i=1;i<=10;i++)
        {
            printf("%d*%d=%d\n",num,i,num*i);
        }

           return 0;
        }
        
    

