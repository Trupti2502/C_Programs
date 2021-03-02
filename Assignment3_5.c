#include<stdio.h>
typedef int BOOL;
# define TRUE 1
# define FALSE 0
int ChkVowel(char cValue)
{
	if(cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue=='u'||cValue=='A'||cValue=='E'||cValue=='I'||cValue=='O'||cValue=='U')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	printf("Enter character\n");
	scanf("%c",&cValue);
	bRet =ChkVowel(cValue);
	if(bRet==TRUE)
	{
		printf("It is Vowel\n");
	}
	else
	{
		printf("It is not Vowel\n");
	}
	return 0;
}

/*OUTPUT:-
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ gcc Assignment3_5.c -o myexe
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ ./myexe
Enter character
A
It is Vowel
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ ./myexe
Enter character
r
It is not Vowel
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ ./myexe
Enter character
T
It is not Vowel
user@user-Lenovo-G50-80:~/Desktop/LB/Assignments/Assignment 3$ ./myexe
Enter character
o
It is Vowel
 
  */
