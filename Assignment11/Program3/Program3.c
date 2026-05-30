// Write a program which accept range from user and return addition of all numbers between that range(Range should contains positive numbers only)

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
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

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d\n",iRet);
    }

    return 0;
}

/*
Time Complexity : O(N)

Output :

Enter starting point : 23
Enter ending point : 30
Addition is 212

Enter starting point : 10
Enter ending point : 18
Addition is 126

Enter starting point : -10
Enter ending point : 2
Invalid range
*/