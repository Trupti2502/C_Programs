#include<stdio.h>
int Sum(int No)
{  
	int iCnt=0;
	int sum=0;

	if(No==0)
	{
		return;
	}
	if(No<0)
	{
		printf("\nyour entered number is negative\n\n");
		No=-No;
	}

	for(iCnt=1;iCnt<=No;iCnt++)
	{
		sum=sum+iCnt;
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
