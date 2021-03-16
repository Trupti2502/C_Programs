#include<stdio.h>
int CountOdd(int iNo)
{
 int iDigit=0;
 int Mult=1;
 if(iNo<0)
 {
	 iNo=-iNo;
 }
 while(iNo>0)
 {
         iDigit=iNo%10;
	 if((iDigit)!=0)
	 {
         Mult=Mult*iDigit;
	 }
         iNo=iNo/10;
 }
 return Mult;
}
int main()
{
system("clear");
int iValue = 0;
int iRet = 0;
printf("Enter number:");
scanf("%d",&iValue);
iRet = CountOdd(iValue);
printf("%d\n\n",iRet);
return 0;
}

