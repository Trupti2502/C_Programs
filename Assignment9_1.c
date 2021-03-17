#include<stdio.h>
void RangeDisplay(int iStart , int iEnd)
{
	int iCnt=0;
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		printf("%d\t",iCnt);
	}
	printf("\n");
}
int main()
{
	system("clear");
	int iValue1 = 0, iValue2 = 0;
	printf("Enter starting point:");
	scanf("%d",&iValue1);
	printf("Enter ending point:");
	scanf("%d",&iValue2);
	RangeDisplay(iValue1, iValue2);
	return 0;
}


/*Enter starting point:10
Enter ending point:10
10	
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 9$ 
*/
