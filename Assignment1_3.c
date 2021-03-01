#include<stdio.h>
void  Display()
{
	int i=0;
	i=5;
	for(i=5;i>0;i=i-2)
	{
		printf("%d\n",i);
		i++;
	}
}
int main()
{
	Display();
	return 0;
}


/*OUTPUT:-
 * user@user-Lenovo-G50-80:~/Desktop/LB$ gcc Assignment1_3.c -o myexe
user@user-Lenovo-G50-80:~/Desktop/LB$ ./myexe
5
4
3
2
1
*/
