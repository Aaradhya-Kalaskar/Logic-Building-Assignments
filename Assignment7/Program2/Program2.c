//Accept amount in US dollar and return its corresponding value in Indian currency.

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}

/*
Output:
Enter number of USD : 10
Value in INR is 700
*/