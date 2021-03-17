#include<stdio.h>
void RangeDisplayEven(int iStart , int iEnd)
{
	int iCnt=0;
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		if((iCnt%2)==0)
		{
			printf("%d\t",iCnt);
		}
	}
	printf("\n\n");
}
int main()
{
	system("clear");
	int iValue1 = 0, iValue2 = 0;
	printf("Enter starting point");
	scanf("%d",&iValue1);
	printf("Enter ending point");
	scanf("%d",&iValue2);
	RangeDisplayEven(iValue1, iValue2);
	return 0;
}

/*Enter starting point-10
Enter ending point2
-10	-8	-6	-4	-2	0	2	

user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 9$ 
*/
