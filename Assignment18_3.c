#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[], int iLength)
{
	int i=0;
	for(i=0;i<iLength;i++)

	{
		if(Arr[i]==11)
		{
			break;
		}
	}
	if(i==iLength)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
int main()
{
	int iSize = 0,iRet = 0,iCnt = 0;
	int *p = NULL;
	BOOL bRet = FALSE;
	printf("Enter number of elements");
	scanf("%d",&iSize);
	p = (int *)malloc(iSize * sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter %d elements ",iSize);
	for(iCnt = 0;iCnt<iSize; iCnt++)
	{
		printf("Enter element : %d",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	bRet = Check(p, iSize);
	if(bRet == TRUE)
	{
		printf("11 is present");
	}
	else
	{
		printf("11 is absent");
	}
	free(p);
	return 0;
}

/*
 * output:-
 * Enter number of elements5
Enter 5 elements Enter element : 111
Enter element : 222
Enter element : 333
Enter element : 444
Enter element : 55
11 is present


Enter number of elements5
Enter 5 elements Enter element : 122
Enter element : 233
Enter element : 345
Enter element : 464
Enter element : 57
11 is absent
*/
