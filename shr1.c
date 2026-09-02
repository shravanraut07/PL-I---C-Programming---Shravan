/*
Program(1)-> Write a program to make use of input/output functions using different data types.
Solution(1)-> Predefined Value
*/

#include<stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    rollnum = 55;
    per = 88.88;
    grade = 'A';

    printf("___Student Information____\n");
    printf("\n Roll number:%d",rollnum);
    printf("\n Percentage:%f",per);
    printf("\n Grade:%c",grade);
    return 0;
}
