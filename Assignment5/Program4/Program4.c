//Write a program which accept N from user and print all odd numbers up to N.

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}

/*
Time Complexity : N/2

Output: 
Enter Number : 8
1       3       5       7

*/