#include<stdio.h>

void Accept(int iNo)
{
	int iCnt=0;

	for(;iCnt<iNo;iCnt++)
	{
		printf("*");
	}
}
int main()
{
	int iValue=0;
	iValue=5;

	Accept(iValue);
	return 0;
}


/*
OUTPUT:-
user@user-Lenovo-G50-80:~/Desktop/LB$ gcc Assignment1_5.c -o myexe
user@user-Lenovo-G50-80:~/Desktop/LB$ ./myexe
*****

*/
