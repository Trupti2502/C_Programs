#include<stdio.h>
void FactRev(int iNo)
{
	int iCnt=0;
		for(iCnt=iNo/2;iCnt>0;iCnt--)
		{
			if(iNo%iCnt==0)
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
	FactRev(iValue);
	return 0;
}


/*OUTPUT-
 * user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 4$ gcc Assignment4_2.c -o myexe
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 4$ ./myexe
Enter number12
6	4	3	2	1
*/
