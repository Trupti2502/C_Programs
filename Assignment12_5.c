#include<stdio.h>
void Pattern(int iRow, int iCol)
{
        int iCnt=0,jCnt=0,a=1;
        for(iCnt=iRow;iCnt>=1;iCnt--)
        {
                for(jCnt=1;jCnt<=iCol;jCnt++,a++)
                {
                        printf("%d\t",a);
                }
                printf("\n");
        }
}
int main()
{
        system("clear");
        int iValue1 = 0, iValue2 = 0;
        printf("Enter number of rows and columns:\n");
        scanf("%d %d",&iValue1, &iValue2);
        Pattern(iValue1, iValue2);
        return 0;
}


/*Enter number of rows and columns:
3
4
1	2	3	4	
5	6	7	8	
9	10	11	12	
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 12$ 

*/
