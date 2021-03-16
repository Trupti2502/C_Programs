#include<stdio.h>
void Display(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
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


/*Enter number:8
1	2	3	4	5	6	7	8	

user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 8$ 
*/
