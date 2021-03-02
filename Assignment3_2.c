#include<stdio.h>
void DisplayFactor(int iNo)
{
	int i = 0;
	if(iNo <= 0)
	{

		iNo = -iNo;
	}
	for(i = 1; i<=iNo/2;i++)
	{
		if(iNo%i==0)
		{
			if(i%2==0)
			{
				printf("%d\t",i);
			}
		}		
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	DisplayFactor(iValue);
	return 0;
}


/*OUTPUT:-
 * user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ gcc Assignment3_2.c -o myexe
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ ./myexe
Enter number
24
2	4	6	8	12

*/
