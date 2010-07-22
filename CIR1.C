#include<stdio.h>
#include<conio.h>
#include<graphics.h>
main()
{
	int gd=DETECT,gm,d,x,y,r,xc,yc;
	initgraph (&gd,&gm,"c:\\tc\\bgi");
	printf("\nEnter coordinates:");
	scanf("%d %d",&xc,&yc);
	printf("\nEnter radius of circle:");
	scanf("%d",&r);
	d=3-(2*r);
	x=r;
	y=0;
	putpixel(xc+x,yc-y,1);
	for(x=0;x<=y;x++)
	{
		   if(d<0)
		   d=d+(4*x)+6;
		   else
		   {
			d=d+4*(x-y)+10;
			y--;
		   }
		   putpixel(xc+x,yc-y,1);
		   putpixel(xc-x,yc-y,1);
		   putpixel(xc+x,yc+y,1);
		   putpixel(xc-x,yc+y,1);
		   putpixel(xc+y,yc-x,1);
		   putpixel(xc-y,yc-x,1);
		   putpixel(xc+y,yc+x,1);
		   putpixel(xc-y,yc+x,1);
	}
	getch();
	closegraph();
}



