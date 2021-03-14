#include<stdio.h>
int Count(int iNo)
{
int iDigit=0,count=0;
 while(iNo>0)
 {
         iDigit=iNo%10;
         iNo=iNo/10;
         if(iDigit<6)
         {
                 count++;
         }
 }
 return count;

}
int main()
{
	system("clear");
int iValue = 0;
int iRet = 0;
printf("Enter number:");
scanf("%d",&iValue);
iRet = Count(iValue);
printf("%d\n\n",iRet);
return 0;
}
