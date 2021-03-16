#include<stdio.h>
int CountOdd(int iNo)
{
	int iDigit=0;
	int Cnt=0;
	int sum1=0,sum2=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			sum1=sum1+iDigit;
		}
		else
		{
                      sum2=sum2+iDigit;

		}
		iNo=iNo/10;
	}
	return sum2-sum1;
}
int main()
{
	system("clear");
	int iValue = 0;
	int iRet = 0;
	printf("Enter number:");
	scanf("%d",&iValue);
	iRet = CountOdd(iValue);
	printf("%d\n\n",iRet);
	return 0;
}

