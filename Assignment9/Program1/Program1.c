//Write a program which accept number from user and return the count of even

#include<stdio.h>

int CountEven(int iNo)
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

        if((iDigit % 2) == 0)
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

    iRet = CountEven(iValue);

    printf("Count of even digits is : %d\n",iRet);

    return 0;
}

/*
Time Complexity:O(N)
Output:
Enter number : 2395
Count of even digits is : 1

Enter number : -1018
Count of even digits is : 2

*/