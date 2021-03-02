#include<stdio.h>
int FactDiff(int iNo)
{
int iCnt=0;
   int sum1=0;
   int sum2=0;
                for(iCnt=1;iCnt<iNo;iCnt++)
                {
                        if(iNo%iCnt!=0)
                        {
                             sum1=sum1+iCnt;
                        }
			else
			{
			     sum2=sum2+iCnt;
			}
                }
        return sum2-sum1;
 
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	iRet = FactDiff(iValue);
	printf("%d",iRet);
	return 0;
}


/*OUTPUT:-
 * user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 4$ gcc Assignment4_5.c -o myexe
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 4$ ./myexe
Enter number12
-34
*/
