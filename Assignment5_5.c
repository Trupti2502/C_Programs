#include<stdio.h>
int FactDiff(int iNo)
{
	int iCnt=0;
	int sum1=0,sum2=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			sum1=sum1+iCnt;
		}
		else
		{
			sum2=sum2+iCnt;
		}
	}
	
	return sum1-sum2;

}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet = FactDiff(iValue);
	printf("%d",iRet);
	return 0;
}
