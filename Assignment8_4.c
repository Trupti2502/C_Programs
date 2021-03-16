#include<stdio.h>
void OddDisplay(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iCnt%2)!=0)
		{
			printf("%d\t",iCnt);
		}
	}
	printf("\n\n");
}
int main()
{
	system("clear");
	int iValue = 0;
	printf("Enter number:");
	scanf("%d",&iValue);
	OddDisplay(iValue);
	return 0;
}


/*Enter number:18
1	3	5	7	9	11	13	15	17	

user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 8$ 
*/

