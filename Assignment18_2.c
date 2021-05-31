#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLength)
{
        int i=0,sum1=0,sum2=0,cnt1=0,cnt2=0;
        for(i=0;i<iLength;i++)
        {
                if((Arr[i]%2==0))
                {
                    cnt1++;
                }
		else
		{
		    cnt2++;
		}
        }
        return cnt1-cnt2;
}
int main()
{
        int iSize = 0,iRet = 0,iCnt = 0;
        int *p = NULL;
        printf("Enter number of elements:");
        scanf("%d",&iSize);
        p = (int*)malloc(iSize*(sizeof(int)));
        if(p == NULL)
        {
                printf("Unable to allocate memory");
                return -1;
        }
        printf("Enter %d elements\n",iSize);
        for(iCnt = 0;iCnt<iSize; iCnt++)
        {
                printf("Enter %d element :",iCnt+1);
                scanf("%d",&p[iCnt]);
        }
        iRet=Difference(p, iSize);
        printf("Difference=%d\n",iRet);
        free(p);
        return 0;
}

/*Enter number of elements:7
Enter 7 elements
Enter 1 element :85
Enter 2 element :66
Enter 3 element :3
Enter 4 element :80
Enter 5 element :93
Enter 6 element :88
Enter 7 element :90
Frequency=1
*/
