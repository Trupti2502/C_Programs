#include<stdio.h>
void Pattern(int iRow, int iCol)
{
	int i=0,j=0;
	if(iRow!=iCol)
	{
		printf("number rows and column should same\n");
		return;
	}
	for(i=iRow;i>=1;i--)
	{
		printf("\n");

		for(j=1;j<=iCol;j++)
		{
			if(i==j)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
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

*	*	*	#
*	*	#	*
*	#	*	*
#	*	*	*

*/
