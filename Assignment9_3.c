#include<stdio.h>
int RangeDisplayEven(int iStart , int iEnd)
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
         sum=sum+iCnt;
 }
 return sum;
}
int main()
{
        system("clear");
int iValue1 = 0, iValue2 = 0,ret=0;
printf("Enter starting point");
scanf("%d",&iValue1);
printf("Enter ending point");
scanf("%d",&iValue2);
ret=RangeDisplayEven(iValue1, iValue2);
if(ret!=-1)
{
printf("Addition=%d\n",ret);
}
return 0;
}



/*Enter starting point10
Enter ending point18
Addition=126
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 9$ 

*/
