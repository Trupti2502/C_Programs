#include "header2.h"//due to "" preprocessor search inside current directory for <> preprocessor search on comiler specified path
int main()
{   
	int iNo1=0;
	int iNo2=0;
    int iRet=0;

	printf("\nEnter First Number:\n");
	scanf("%d",&iNo1);

	printf("\nEnter Second Number:\n");
	scanf("%d",&iNo2);

    iRet=Maximum(iNo1,iNo2);
	printf("\nMaximum number is:%d \n",iRet);

	iRet=Minimum(iNo1,iNo2);
	printf("\nManimum number is:%d \n",iRet);

	return 0;
}
