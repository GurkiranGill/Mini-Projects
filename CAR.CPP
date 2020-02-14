#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{
    clrscr();
	int gd = DETECT, gm;
	initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");

	line(0,400,700,400);//base
	circle(150,360,40); //rear wheel
	line(150,360,150,320);
	line(150,360,185,380);
	line(150,360,115,380);
	circle(360,370,30); //front wheel
	line(360,370,360,340);
	line(360,370,335,385);
	line(360,370,385,385);
	line(110,310,180,310); //chasis
	line(180,310,210,380);
	line(210,380,320,380);
	line(320,380,320,360);
	line(320,360,345,330);
	line(345,330,380,330);
	line(380,330,410,380);
	line(410,380,470,380);//boot
	line(470,380,320,230);
	line(320,230,200,230);// roof
	line(200,230,170,250);
	line(110,310,110,240);
	line(110,240,160,240);
	line(160,240,250,360);
	line(250,360,320,360);
	line(250,340,335,340);
	line(250,340,180,245);

getch();
}
