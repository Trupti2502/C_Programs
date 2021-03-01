#include<stdio.h>
Display (int iNo)
{
	if(iNo<10)
	{
		printf("Hello\n");
	}
	else
	{
		printf("Demo\n");
	}
}
int main()
{
	int iValue = 0;
	printf("\nEnter number");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}

/*
 * OUTPUT:-
 * user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ gcc Assignment2_3.c -o myexe -w
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ ./myexe

Enter number3
Hello
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ gcc Assignment2_3.c -o myexe -w
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ ./myexe

Enter number12
Demo

 */
