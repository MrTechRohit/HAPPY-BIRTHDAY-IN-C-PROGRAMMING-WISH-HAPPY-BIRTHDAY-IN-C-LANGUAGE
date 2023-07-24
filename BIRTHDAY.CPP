//____________ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL _____________//
//------------------- C PROGRAM TO WISH HAPPY BIRTHDAY --------------------//

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://tc//bgi");

//__________candal____________//
setfillstyle(4,13);
rectangle(295,150,305,200);
floodfill(296,195,15);

line(298,150,298,140);
setfillstyle(SOLID_FILL,YELLOW);
ellipse(298,130,0,360,4,10);
floodfill(298,130,15);

setcolor(15);

//......... CAKE ...............
setfillstyle(1,10);
ellipse(300,200,0,360,60,20);
floodfill(301,210,15);

setfillstyle(1,6);
line(240,200,240,250);
line(360,200,360,250);
ellipse(300,250,180,360,60,20);
floodfill(241,250,15);

settextstyle(5,0,2);
outtextxy(266,230,"HAPPY");

//..........................

setfillstyle(1,14);
ellipse(300,265,126,54,100,40);
floodfill(241,255,15);

setfillstyle(1,6);
line(200,265,200,325);
line(400,265,400,325);
ellipse(300,320,180,360,100,40);
ellipse(300,320,180,360,100,40);
floodfill(201,320,15);

settextstyle(5,0,2);
outtextxy(246,310,"BIRTHDAY");

//....................
setfillstyle(1,12);
ellipse(300,340,140,40,130,50);
floodfill(201,340,15);

setfillstyle(1,6);
line(170,340,170,430);
line(430,340,430,430);
ellipse(300,430,180,360,130,40);
floodfill(171,430,15);

settextstyle(7,0,1);
outtextxy(210,405,"ROHIT TECH STUDY");

//............. CAKE DESIGN .................

setfillstyle(1,4);
circle(265,200,6);
floodfill(265,200,15);

circle(300,212,6);
floodfill(300,212,15);

circle(335,200,6);
floodfill(335,200,15);

//..........................

setfillstyle(1,4);
circle(243,262,6);
floodfill(243,262,15);

circle(231,279,6);
floodfill(231,279,15);

circle(275,277,6);
floodfill(275,277,15);

circle(319,276,6);
floodfill(319,276,15);

circle(362,276,6);
floodfill(362,276,15);

setcolor(9);
outtextxy(251,276,"*");
outtextxy(291,270,"*");
outtextxy(332,270,"*");
outtextxy(370,270,"*");

setcolor(15);
//...................................

setfillstyle(1,4);
circle(200,337,6);
floodfill(200,337,15);

circle(250,360,6);
floodfill(250,360,15);

circle(300,366,6);
floodfill(300,366,15);

circle(350,361,6);
floodfill(350,361,15);

circle(400,338,6);
floodfill(400,338,15);

setcolor(10);
outtextxy(220,345,"*");
outtextxy(275,350,"*");
outtextxy(320,360,"*");
outtextxy(370,350,"*");

//............. TEXT ANIMATION ........................

for(int i=0; i<30; i++)
{
settextstyle(10,0,5);
setcolor(i);
outtextxy(14,15,"H");
setcolor(i+1);
outtextxy(60,15,"A");
setcolor(i);
outtextxy(110,15,"P");
setcolor(i+1);
outtextxy(155,15,"P");
setcolor(i);
outtextxy(196,15,"Y");

setcolor(i+1);
outtextxy(270,15,"B");
setcolor(i);
outtextxy(320,15,"I");
setcolor(i+1);
outtextxy(340,15,"R");
setcolor(i);
outtextxy(386,15,"T");
setcolor(i+1);
outtextxy(437,15,"H");
setcolor(i);
outtextxy(484,15,"D");
setcolor(i+1);
outtextxy(525,15,"A");
setcolor(i);
outtextxy(560,15,"Y");

delay(200);
}

getch();
closegraph();
}


//.............  I HOPE YOU LIKE THIS PROGRAMMING .............

//..........  LIKE .......... SHARE .......... SUBSCRIBE ..............

