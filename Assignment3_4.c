#include<stdio.h>
void  DisplayConvert (char CValue)
{
	if(CValue>='A' && CValue<='Z')
	{
		printf("%c\n",CValue+32);
	}
	else if(CValue>='a' && CValue<='z')
	{
		printf("%c\n",CValue-32);
	}
}
int main()
{
	char cValue ='\0';
	printf("Enter character\n");
	scanf("%c",&cValue);
	DisplayConvert(cValue);
	return 0;
}


/*Output:-
 * user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ gcc Assignment3_4.c -o myexe
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ ./myexe
Enter character
a
A
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ ./myexe
Enter character
B
b

*/
