//Write a program which accept area in square feet and convert it into square meter.( 1 sq feet = 0.0929 sq. meter)

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dAns = 0.0;

    dAns = iValue * 0.0929;

    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf",dRet);

    return 0;
}

/*
Output:
Enter area in square feet : 5
Area in square meter is 0.464500
*/