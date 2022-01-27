/*write a program to input any string and impliment strlen() and strcmp()
in a single program*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[10],s2[10],a,b;
	clrscr();
	printf("\n enter first string:");
	gets(s1);
 a=strlen(s1);
 printf("%d",a);
	printf("\n enter second string:");
	gets(s2);
 b=strlen(s2);
 printf("%d",b);
	if(strcmp(s1,s2)==0)
	{
		printf("\n you entered the same string two times:");
	}
	else
	{
		printf("\n you entered string are not same:");
	}
	getch();
}



