#include<stdio.h>

typedef int  BOOL;
#define TRUE 1
#define FALSE 0

int  Check(int iNo)
{
	if((iNo %5)==0)
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
	int iValue=0;
	BOOL bRet=FALSE;

	printf("Enter number");
	scanf("%d",&iValue);

	bRet=Check(iValue);

	if (bRet==TRUE)
	{
		printf("Divisible by 5");
	}

	else
	{
		printf("Not Divisible by 5");
	}

	return 0;
}




/*OUTPUT:-
 * user@user-Lenovo-G50-80:~/Desktop/LB$ gcc Assignment1_4.c -o myexe
user@user-Lenovo-G50-80:~/Desktop/LB$ ./myexe
Enter number5
Divisible by 5
*/
