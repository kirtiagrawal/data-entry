#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,c[20][20],wt,w[20],v[20];
	clrscr();
	printf("\nEnter the no. of blocks:");
	scanf("%d",&n);
	printf("\nEnter the wt of each block:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&w[i]);
	}
	printf("\nEnter the value of each block:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&v[i]);
	}
	printf("\nEnter the max wt:");
	scanf("%d",&wt);
	for(i=0;i<wt;i++)
	{
		c[0][i]=0;
	}
	for(i=1;i<=n;i++)
	{
		c[i][0]=0;
		for(j=1;j<=wt;j++)
		{
			if(w[i]<=j)
			{       printf("");
				if((v[i]+c[i-1][j-w[i]])>(c[i-1][j]))
				c[i][j]=v[i]+c[i-1][j-w[i]];
				else
				c[i][j]=c[i-1][j];
			}
			else
			c[i][j]=c[i-1][j];

		       printf("\ni:%d\tj:%d\tc[i][j]:%d",i,j,c[i][j]);
		}

	}
	printf("\nsol. is:%d",c[i-1][j-1]);
	getch();
}
