/* write a program to enter any string and find and print  the total number
of vowels in it*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char s[10];
	int i,c=0;
	clrscr();
	printf("\n enter any string:");
	gets(s);
	printf("\n vowels in the string:");
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='a'|| s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u')
		{
			c++;
			printf("%c",s[i]);
		}
	}
	printf("\n number of vowels in the string: %d",c);
	printf("\n");
