#include<stdio.h>
void PrintEven(int iNo)
{
	if(iNo <= 0)
	{
		return;
	}

	int iCnt=1;
	int Cnt=1;
	do
	{
		if(iCnt%2==0)
		{
			printf("%d\t",iCnt);
			Cnt++;
		}
		iCnt++;
		
	}while(Cnt<=iNo);
}
int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	PrintEven(iValue);
	return 0;
}


/*OUTPUT:-
 * user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ gcc Assignment3_1.c -o myexe
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ ./myexe
Enter number
7
2	4	6	8	10	12	14

*/
