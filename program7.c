#include<stdio.h>
//void Display(int)
void Display(int No)
{
	
    Cnt=1;
    printf("\n\n\n");
    printf("**Using While Loop**\n");
	while(Cnt<=No)
	{
	 printf("%d\t",Cnt);
	 Cnt++;	
	}
	printf("\n\n");
	
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

