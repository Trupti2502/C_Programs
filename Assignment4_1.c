#include<stdio.h>
int MultFact(int iNo)
{
	int iCnt=0;
	int Mult=1;
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			Mult=Mult*iCnt;
		}
	}
	return Mult;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet = MultFact(iValue);
	printf("%d\n",iRet);
	return 0;
}


/*OUTPUT:-
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 4$ ./myexe
Enter number
12
144
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 4$ ./myexe
Enter number
13
1 
 */
