//Write a program which accept distance in kilometer and convert it in meter.(1km = 1000 m).

#include<stdio.h>

int KMToMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in meter is %d",iRet);

    return 0;
}

/*
Output:
Enter distance : 5
Distance in meter is 5000
*/