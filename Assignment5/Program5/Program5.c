//Write a program which accept N and print first 5 multiples of N.

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",iCnt * iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}

/*
Time Complexity : N

Output: 
Enter Number : 4
4       8       12      16      20

*/