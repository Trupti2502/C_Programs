#include<stdio.h>
void Display(int iNo)
{
	while(iNo>0)
	{
		printf("*");
		iNo--;
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}



/*OUTPUT:-
 * user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ vim Assignment2_2.c
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ gcc Assignment2_2.c -o myexe -w
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 2$ ./myexe
Enter number6
******
*/
