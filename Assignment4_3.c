#include<stdio.h>
void NonFact(int iNo)
{
	int iCnt=0;
		for(iCnt=1;iCnt<iNo;iCnt++)
		{
			if(iNo%iCnt!=0)
			{
				printf("%d\t",iCnt);
			}
		}
}

int main()
{
	int iValue = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	NonFact(iValue);
	return 0;
}
/*OUTPUT:-
 * user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 4$ gcc Assignment4_3.c -o myexe
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 4$ ./myexe
Enter number12
5	7	8	9	10	11	*/
