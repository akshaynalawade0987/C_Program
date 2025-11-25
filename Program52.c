#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0, iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10; //123.4
        iNo = iNo / 10;    //123
        iSum = iSum + iDigit;//0+4,4+3,7+2,9+1=10
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of digits : %d\n",iRet);

    return 0;
}