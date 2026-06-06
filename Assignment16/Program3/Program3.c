//Accept N numbers from user and return the difference between largest and smallest number

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = 0, iMax = 0;

    iMax = iMin = Arr[0];

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
           iMax= Arr[iCnt];
        }

         if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }

    }
   return iMax - iMin;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *p = NULL;

    printf("Enter Number of Elements : \n");
    scanf("%d",&iLength);

    p = (int *)malloc(sizeof(int) * iLength);

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the Elements:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter Element : %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iLength);

    printf("Difference is : %d\n", iRet);

    free(p);

    return 0;
}