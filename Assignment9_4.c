#include<stdio.h>
int RangeSumEven(int iStart , int iEnd)
{
	int iCnt=0;
	int sum=0;
	if((iStart<0) || (iEnd<0))

	{
		printf("INVALID RANGE\n\n");
		return -1;
	}
	for(iCnt=iStart;iCnt<=iEnd;iCnt++)
	{
		if((iCnt%2)==0)
		{
			sum=sum+iCnt;
		}
	}
	return sum;

}
int main()
{
	system("clear");
	int iValue1 = 0, iValue2 = 0, iRet =0;
	printf("Enter starting point");
	scanf("%d",&iValue1);
	printf("Enter ending point");
	scanf("%d",&iValue2);
	iRet = RangeSumEven(iValue1, iValue2);
	if(iRet!=-1)
	{
		printf("Addition is %d\n\n",iRet);
	}
	return 0;
}


/*Enter starting point23
Enter ending point30
Addition is 108

user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 9$ 
*/
