#include<stdio.h>
int Addition(int value1,int value2)
{
 int ans;
 return value1+value2;
}

int main()
{
 printf("\n\n**ADDITION OF TWO NUMBERS**\n\n");

 int No1=0,No2=0;
 int Ans=0;
 
 printf("Enter First Number : ");
 scanf("%d",&No1);
 
 printf("Enter Second Number : ");
 scanf("%d",&No2);
 
 Ans=Addition(No1,No2);
 
 printf("\n\nAddition of %d and %d is %d\n\n",No1,No2,Ans);
 
 return 0; 
}
