#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	for(;iCnt<iNo;iCnt++)
	{
		printf("*");
	}
}
int main()
{
	int iValue = 0;
	printf("Enter Number");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}


/*output:-
 * user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ gcc Assignment2_1.c -o myexe
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ ./myexe
Enter Number7
*******

*/
