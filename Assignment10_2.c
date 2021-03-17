#include<stdio.h>
void Pattern(int iNo)
{
	int iCnt=0;
	for(iCnt=iNo;iCnt>0;iCnt--)
	{
		printf("%d\t#\t",iCnt);
	}
	printf("\n\n");
}
int main()
{
	system("clear");
	int iValue = 0;
	printf("Enter number of elements:");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}

/*Enter number of elements:4
4	#	3	#	2	#	1	#	

user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 10$ 

*/
