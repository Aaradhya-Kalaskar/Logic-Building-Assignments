// Write a program which accept range from user and return addition of all even numbers in between that range.
// (Range should contain positive numbers only)

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    if(iValue1 < 0 || iValue2 < 0 || iValue1 > iValue2)
    {
        printf("Invalid range");
    }
    else
    {
        iRet = RangeSumEven(iValue1, iValue2);
        printf("Addition is %d",iRet);
    }

    return 0;
}

/*
Time Complexity : O(N)

Output :

Enter starting point : 23
Enter ending point : 30
Addition is 108

Enter starting point : -10
Enter ending point : 2
Invalid range

Enter starting point : 90
Enter ending point : 18
Invalid range
*/