#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(int iNo)
{
	if(iNo%2==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	printf("Enter number:\n");
	scanf("%d",&iValue);
	bRet = ChkEven(iValue);
	if(bRet==1)
	{
		printf("Number in even\n");
	}
	else
	{
		printf("Number is odd\n");
	}
		
	return 0;
}

/*output:-
 * user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ gcc Assignment2_5.c -o myexe -w
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ ./myexe
Enter number:
3
Number is odd
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ gcc Assignment2_5.c -o myexe -w
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ ./myexe
Enter number:
4
Number in even

*/
