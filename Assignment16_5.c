#include<stdio.h>
void Pattern(int iRow, int iCol)
{
        int i=0,j=0;
        if(iRow!=iCol)
        {
                printf("number rows and column should same\n");
                return;
        }
        for(i=1;i<=iRow;i++)
        {
                printf("\n");

                for(j=1;j<=iCol;j++)
                {
                        if((i==j)||(i==iRow)||(j==iCol)||(i==1)||(j==1))
                        {
                                printf("%d\t",j);
                        }
                        else
			{
				printf("\t");
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
 * Enter number of rows and columns5
5

1	2	3	4	5
1	2			5
1		3		5
1			4	5
1	2	3	4	5
*/
