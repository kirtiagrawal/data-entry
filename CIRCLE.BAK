#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	int x,y,r,xc=320,yc=240,d;
	initgraph(&gd,&gm,"c:\tc\\bgi");

	printf("enter the radius:");
	scanf("%d",&r);
	x=0,y=r ;
	putpixel(xc+x,yc-y,1);
	d=3-(2*r);
	for(x=0;x<=y;x++)
	{
		if(d<0)
		{
			y=y;
			d=(d+(4*x)+6);
		}
		else
		{
			y=y-1;
			d=(d+4*(x-y)+ 10);
		}
		putpixel(xc+x,yc-y,1);
		putpixel(xc-x,yc-y,2);
		putpixel(xc+x,yc+y,3);
		putpixel(xc-x,yc+y,4);
		putpixel(xc+y,yc-x,5);
		putpixel(xc-y,yc-x,6);
		putpixel(xc+y,yc+x,7);
		putpixel(xc-y,yc+x,8);
		}
		getch();
		closegraph();
}





