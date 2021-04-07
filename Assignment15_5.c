#include<stdio.h>
void Pattern(int iRow, int iCol)
{
        int i=0,j=0;
        if(iRow!=iCol)
        {
                printf("Number of rows and columns should same\n");
                return;
        }
        for(i=1;i<=iRow;i++)
        {
                printf("\n");
                for(j=1;j<=iCol;j++)
                {

                        if(i<=j)
                        {
                                printf("%d\t",j);
                        }
			else
			{
				printf("\t");
			}
                      
                }
                printf("\n");
        }
}
int main()
{
        system("clear");
        int iValue1 = 0, iValue2 = 0;
        printf("Enter number of rows and columns:");
        scanf("%d %d",&iValue1, &iValue2);
        Pattern(iValue1, iValue2);
        return 0;
}

/*output:-
 * Enter number of rows and columns:5
5

1	2	3	4	5

	2	3	4	5

		3	4	5

			4	5

				5
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 15$
*/
