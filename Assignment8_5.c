#include<stdio.h>
void MultipleDisplay(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=5;iCnt++)
	{
		printf("%d\t",iCnt*iNo);
	}
	printf("\n\n");
}
int main()
{
	system("clear");
	int iValue = 0;
	printf("Enter number:");
	scanf("%d",&iValue);
	MultipleDisplay(iValue);
	return 0;
}


/*Enter number:4
4	8	12	16	20	

user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 8$ 
*/
