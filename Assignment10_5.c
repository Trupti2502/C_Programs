#include<stdio.h>
void Pattern(int iNo)
{
        int iCnt=1;
	int Cnt=0;
        while(Cnt<iNo)
        {
                if((iCnt%2)==0)
		{
			printf("%d\t",iCnt);
			Cnt++;
		}
		iCnt++;
        }
        printf("\n\n");
}
int main()
{
        system("clear");
        int iValue = 0;
        printf("Enter number of elements:");
        scanf("%d",&iValue);
        Pattern(iValue);
        return 0;
}


/*Enter number of elements:5
2	4	6	8	10	

user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 10$ 
*/
