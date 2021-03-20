#include<stdio.h>
void Pattern(int iRow, int iCol)
{
        int iCnt=0,jCnt=0;
        for(iCnt=iRow;iCnt>=1;iCnt--)
        {
                for(jCnt=1;jCnt<=iCol;jCnt++)
                {
                        printf("%d\t",iCnt);
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


/*
Enter number of rows and columns:
3
4
3	3	3	3	
2	2	2	2	
1	1	1	1	
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignmen 12*/
