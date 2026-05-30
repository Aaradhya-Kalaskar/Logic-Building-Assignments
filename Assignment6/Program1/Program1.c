//Write a program which accept number from user anf if number is less than 50 then print small, 
//if it is greater than 50 and less thaan 100 then print medium, if it is greater than 100 then print large.

#include<stdio.h>

void Number(int iNo)
{
      if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}

/*
Time Complexity : No Time complexity because no loop in program

Output: 
Enter Number : 45
Small

*/