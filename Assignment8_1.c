#include<stdio.h>
void Pattern(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("$\t*\t");
	}
	printf("\n\n");
}
int main()
{
	system("clear");
	int iValue = 0;
	printf("Enter number:");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}

/*Enter number:5
$	*	$	*	$	*	$	*	$	*	

user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 8$ 
*/
