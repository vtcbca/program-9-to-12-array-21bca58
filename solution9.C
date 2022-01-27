/* write a program to perfrom selection sort on array of 10 numeric value*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,c,d,po,sw;
	clrscr();
	printf("enter number of element:");
	scanf("%d",&n);
	printf("\n enter %d integer:",n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&a[c]);
	}
	for(c=0;c<n-1;c++)
	{
		po=c;
		for(d=c+1;d<n;d++)
		{
			if(a[po]>a[d])
			po=d;
		}
		if(po!=c)
		{
			sw=a[c];
			a[c]=a[po];
			a[po]=sw;
		}
	}
	printf("\n sort list in ascending order:");
	for(c=0;c<n;c++)
	{
		printf("\n %d",a[c]);
	}
	getch();
}


