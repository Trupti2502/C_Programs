#include<stdio.h>
void Pattern(int iNo)
{
	int iCnt=0;
	char ch;
	for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
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


/*Enter number of elements:5
A	B	C	D	E	
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 10$ 
*/
