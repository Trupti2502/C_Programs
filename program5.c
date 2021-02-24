
#include<stdio.h>
int Sum(int No)
{
	int iCnt=0;
	int sum=0;

	if(No==0)//Input filter
	{
		return;//we can not return value 0 or any bacause function is void
	}
	if(No<0)//input updator
	{
		printf("\nyour entered number is negative\n\n");
		No=-No;
	}

	while(iCnt<=No)
	{
		sum=sum+iCnt;
		iCnt++;
	}
	return sum;
}

int main()
{   
	int ret=0;
    int iNo=0;

	printf("\nEnter Number:");
	scanf("%d",&iNo);

	ret=Sum(iNo);
	printf("\nAddition=%d\n\n",ret);

	return 0;
}
