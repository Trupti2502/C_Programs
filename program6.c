#include<stdio.h>
void Display(int No)
{
	int Cnt=1;
	if(No==0)
	{
		return;
	}
	if(No<0)
	{
		printf("\nyour entered number is negative\n\n");
		No=-No;
	}
	printf("**Using For Loop**\n");
     for(Cnt=1;Cnt<=No;Cnt++)
	{
		printf("%d\t",Cnt);  	} 
}

int main()//entry point function
{
	int iNo=0;
	
	printf("\nEnter The Number:\n");
	scanf("%d",&iNo);
    printf("\n\n");
	Display(iNo);
    printf("\n");
    return 0;
}

