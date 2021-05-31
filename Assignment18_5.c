#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLength, int iNo)
{
	int i=0,cnt=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==iNo)
		{
			cnt++;
		}
	}
	return cnt;
}
int main()
{
	int iSize = 0,iCnt = 0, iRet = 0, iValue = 0;
	int *p = NULL;
	printf("Enter number of elements");
	scanf("%d",&iSize);
	printf("Enter the number");
	scanf("%d",&iValue);
	p = (int *)malloc(iSize * sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter %d elements ",iSize);
	for(iCnt = 0;iCnt<iSize; iCnt++)
			{
				printf("Enter %d element:",iCnt+1);
				scanf("%d",&p[iCnt]);
			}
	iRet = Frequency(p, iSize,iValue);
	printf("%d",iRet);
	free(p);
	return 0;
}


/*output:-
 * Enter number of elements5
Enter the number5
Enter 5 elements Enter 1 element:1
Enter 2 element:5
Enter 3 element:2
Enter 4 element:5
Enter 5 element:3
2
*/
