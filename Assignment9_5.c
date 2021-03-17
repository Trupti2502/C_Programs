#include<stdio.h>
void RangeDisplayRev(int iStart , int iEnd)
{
	int iCnt=0;
	for(iCnt=iEnd;iCnt>=iStart;iCnt--)
	{
		printf("%d\t",iCnt);
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
	RangeDisplayRev(iValue1, iValue2);
	return 0;
}



/*Enter starting point-10
Enter ending point2
2	1	0	-1	-2	-3	-4	-5	-6	-7	-8	-9	-10	

user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 9$ 
*/
