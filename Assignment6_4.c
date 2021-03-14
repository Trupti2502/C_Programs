#include<stdio.h>
int CountFour(int iNo)
{
 int iDigit=0,count=0;
 while(iNo>0)
 {
         iDigit=iNo%10;
         iNo=iNo/10;
         if(iDigit==4)
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
printf("Enter number");
scanf("%d",&iValue);
iRet = CountFour(iValue);
printf("%d\n",iRet);
return 0;
}

