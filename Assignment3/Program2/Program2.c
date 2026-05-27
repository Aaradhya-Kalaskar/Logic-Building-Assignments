//Write a program which accept number from user and print even factors of that number.

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    int iCount = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i=1; i<=iNo; i++)
    {
        if((iNo % i) == 0 && (i % 2 == 0))
        {
            printf("%d\t",i);
            iCount = 1;
        }
    }

    if(iCount == 0)
    {
        printf("No even factors");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}

/*
Output:
Enter Number
36
2       4       6       12      18      36

Enter Number
57
No even factors
*/