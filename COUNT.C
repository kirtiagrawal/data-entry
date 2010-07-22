#include<stdio.h>
#include<conio.h>
void countsort(int[],int,int);
void display(int[],int);
void main()
{
	int i,k,n,a[20];
	clrscr();
	printf("\nEnter the no. of elements of array:");
	scanf("%d",&n);
	printf("\nEnter the elements");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the range of elements:");
	scanf("%d",&k);
	countsort(a,n,k);
	getch();
}
void  countsort(int a[],int n,int k)
{
	int b[20],c[20],i,j;
	for(i=0;i<=k;i++)
	{
		c[i]=0;
	}
	for(i=1;i<=n;i++)
	{
		c[a[i]]+=1;
	}
	for(j=1;j<=n;j++)
	{
		c[j]=c[j]+c[j-1];
	}
	for(j=n;j>=1;j--)
	{
		b[c[a[j]]]=a[j];
		c[a[j]]=c[a[j]]-1;
	}
	display(b,n);

}
void display(int a[],int n)
{
	int i;
	printf("\nsorted array is:");
	for(i=1;i<=n;i++)
	{
		printf("\t%d",a[i]);
	}
}

/*--------------------------------------------OUTPUT---------------------

Enter the no. of elements of array:8
                                                                                
Enter the elements2                                                             
5                                                                               
3                                                                               
0                                                                               
3                                                                               
2                                                                               
0                                                                               
3                                                                               

Enter the range of elements:5                                                   
                                                                                
sorted array is:        0       0       2       2       3       3       3       
5                                                                               
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
