#include<stdio.h>
void Pattern(int iRow, int iCol)
{
        int iCnt=0,jCnt=0;
        for(iCnt=1;iCnt<=iRow;iCnt++)
        {
                for(jCnt=iCol;jCnt>=1;jCnt--)
                {
                        printf("%d\t",jCnt);
                }
                printf("\n");
        }
}
int main()
{
        int iValue1 = 0, iValue2 = 0;
        printf("Enter number of rows and columns:\n");
        scanf("%d %d",&iValue1, &iValue2);
        Pattern(iValue1, iValue2);
        return 0;
}

/*Enter number of rows and columns:
3
4
4	3	2	1	
4	3	2	1	
4	3	2	1	
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 11$ 
*/
