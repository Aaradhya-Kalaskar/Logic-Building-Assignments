//Write a program which accept number from user and display its table.

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}

/*
Time Complexity : O(1)

Output: 

Enter number : 5
5       10      15      20      25      30      35      40      45      50

Enter number : -2
2       4       6       8       10      12      14      16      18      20

*/