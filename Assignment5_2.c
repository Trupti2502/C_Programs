#include<stdio.h>
void FactRev(int iNo)
{
	int iCnt=0;
	for(iCnt=iNo/2;iCnt>=1;iCnt--)
	{
		if(iNo%iCnt==0)
		{		
			printf("%d \t",iCnt);
		}
	}
	printf("\n\n");
}
int main()
{
	system("clear");
	int iValue = 0;
	printf("\nEnter number:");
	scanf("%d",&iValue);
	FactRev(iValue);
	return 0;
}

