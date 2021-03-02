#include<stdio.h>
int SumNonFact(int iNo)
{
   int iCnt=0;
   int sum=0;
                for(iCnt=1;iCnt<iNo;iCnt++)
                {
                        if(iNo%iCnt!=0)
                        {
                             sum=sum+iCnt;
                        }
                }
	return sum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet = SumNonFact(iValue);
	printf("%d\n",iRet);
	return 0;
}


/*OUTPUT:-
 user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 4$ gcc Assignment4_4.c -o myexe
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 4$ ./myexe
Enter number12
50
*/
