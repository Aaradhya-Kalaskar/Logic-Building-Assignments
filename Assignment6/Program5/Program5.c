//Write a program which accept number from user and display its table in reverse order

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return 0;
}

/*
Time Complexity : O(1)

Output: 

Enter number : 7
70      63      56      49      42      35      28      21      14      7

Enter number : -5
50      45      40      35      30      25      20      15      10      5

*/