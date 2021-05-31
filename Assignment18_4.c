#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[], int iLength)
{
	int cnt=0,i=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==11)
			cnt++;
	}
	return cnt;
}
int main()
{
	int iSize = 0,iCnt = 0, iRet = 0;
	int *p = NULL;
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
		printf("Enter %d element :",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = Frequency(p, iSize);
	printf("%d\n\n",iRet);
	free(p);
	return 0;
}

/*output:-
 * Enter number of elements6
Enter 6 elements Enter 1 element :11
Enter 2 element :22
Enter 3 element :33
Enter 4 element :11
Enter 5 element :55
Enter 6 element :444
2
*/
