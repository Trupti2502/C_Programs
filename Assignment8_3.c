#include<stdio.h>
void Display(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=-iNo;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",iCnt);
	}
	printf("\n\n");
}
int main()
{
	system("clear");
	int iValue = 0;
	printf("Enter number:");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}


/*Enter number:4
-4	-3	-2	-1	0	1	2	3	4	

user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 8$ 
*/ 
