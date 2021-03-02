#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
	int i = 0;
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	for(i = 1; i<=iNo/2;i++)
	{
		if(iNo%i==0 && i%2==0)
		{
			printf("%d\t",i);
		}
	}
}


int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	DisplayEvenFactor(iValue);
	return 0;
}


/*OUTPUT:-
 * user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ vim Assignment3_3.c
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ gcc Assignment3_3.c -o myexe
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ ./myexe
Enter number
36
2	4	6	12	18

*/
