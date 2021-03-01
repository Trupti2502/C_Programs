#include<stdio.h>
void Display(int iNo, int iFrequency)
{
	int iCnt = 0;
	for(;iCnt<iFrequency;iCnt++)
	{
		printf("%d\t",iNo);
	}
}
int main()
{
	int iValue = 0;
	int iCount = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	printf("Enter frequency");
	scanf("%d",&iCount);
	Display(iValue,iCount);
	return 0;
}


/*output:-
 * user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ gcc Assignment2_4.c -o myexe -w
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ ./myexe
Enter number3
Enter frequency6
3	3	3	3	3	3
*/
