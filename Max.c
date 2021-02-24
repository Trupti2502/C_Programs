#include<stdio.h>

int Maximum(int No1,int No2)
{
	if(No1>No2)
	{
		printf("Maximum number is %d",No1);
	}
    else
	{
		printf("Maximum number is %d",No2);
	}
}
int main()
{
	int iNo1=0;
	int iNo2=0;

	printf("Enter First Number:");
	scanf("%d",&iNo1);

	printf("Enter Second Number:");
	scanf("%d",&iNo2);

	Maximum(iNo1,iNo2);

	return 0;
}
