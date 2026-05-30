//Write a program which accept number from  user and count frequency of such a digit which are less than 6.

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}

/*
Time Complexity : O(N)

Output :

Enter number : 2395
3

Enter number : 1018
3

Enter number : 9440
3

Enter number : 96672
1
*/