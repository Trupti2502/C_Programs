#include<stdio.h>
int CountEven(int iNo)
{
	int iDigit=0,Cnt=0;
	 if(iNo<0)
 {
         iNo=-iNo;
 }

 while(iNo>0)//Time complexity is``
 {
	 iDigit=iNo%10;
	 if(iDigit%2==0)
	 {
		 Cnt++;
	 }
	 iNo=iNo/10;
 }
 return Cnt;
}
int main()
{
	system("clear");
int iValue = 0;
int iRet = 0;
printf("Enter number:");
scanf("%d",&iValue);
iRet = CountEven(iValue);
printf("%d\n",iRet);
return 0;
}
