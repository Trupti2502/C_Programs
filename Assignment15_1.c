#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	if(iRow!=iCol)
	{
		printf("number of rows and columns should same\n");
		return;
	}
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i>=j)
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
	printf("\n");
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter number of rows and columns");
	scanf("%d %d",&iValue1, &iValue2);
	Pattern(iValue1, iValue2);
	return 0;
}

/*output:-
 * Enter number of rows and columns4
4
*
*	*
*	*	*
*	*	*	*

user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 15$
*/
