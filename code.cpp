#include<graphics.h>
#include<conio.h>
#include <stdlib.h>
#include<cmath>
#include<iostream>
#include<windows.h>

int main()
{

    system("CLS");
   int gd = DETECT, gm ;

   initgraph(&gd, &gm, " ");

   //bgcolor bw mountains and land (sea)
   setcolor(BLUE);
   setfillstyle(SOLID_FILL,BLUE);
   int sea[] = {0,150,640,230,640,100,0,100,0,150};
   drawpoly(5,sea);
   fillpoly(5,sea);


   //bg color below sea(land)
   setcolor(LIGHTGREEN);
   setfillstyle(SOLID_FILL,LIGHTGREEN);
   int ground[] = {0,150,640,230,640,470,0,470,0,150};
   drawpoly(5,ground);
   floodfill(20,400,LIGHTGREEN);

   //bg color beyond mountain(sky)
   setcolor(CYAN);
   setfillstyle(SOLID_FILL,CYAN);
   int sky[]={0,100,640,100,640,0,0,0,0,100};
   drawpoly(5,sky);
   floodfill(10,10,CYAN);

   //hut wall(left)
  setcolor(DARKGRAY);
   setfillstyle(WIDE_DOT_FILL,DARKGRAY);
    rectangle(185,220,285,340);
   floodfill(187,222,DARKGRAY);

   //hut wall(right)
   setcolor(RED);
    setfillstyle(INTERLEAVE_FILL  ,RED);
     rectangle(285,220,455,340);
     floodfill(287,222,RED);

     //hut door
     setcolor(YELLOW);
     setfillstyle(SOLID_FILL,YELLOW);
     rectangle(215,280,255,340);
     floodfill(217,282,YELLOW);
     //hut top

     int top[] = {185,220,235,140,285,220,185,220};
     setcolor(LIGHTCYAN);
     setfillstyle(CLOSE_DOT_FILL,LIGHTCYAN);
     drawpoly(4,top);
     floodfill(235,200,LIGHTCYAN);



     //hut shed
     int shed[] = {235,140,285,220,455,220,405,140,235,140};
     setcolor(RED);
     setfillstyle(LTSLASH_FILL, RED);
     drawpoly(5,shed);
     floodfill(300,200,RED);



    //hut window
    setcolor(LIGHTRED);
    setfillstyle(SOLID_FILL,LIGHTRED);
    rectangle(340,260,400,300);
    floodfill(342,262,LIGHTRED);


//sun
setcolor(YELLOW);
circle(140,42,40);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(120,40,YELLOW);

//cloud1
setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
ellipse(270,30,60,280,15,20);
ellipse(295,20,340,170,20,15);
ellipse(330,28,340,160,22,17);
ellipse(336,41,200,80,20,10);
ellipse(300,46,153,360,31,15);
floodfill(330,30,WHITE);


//cloud2
setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
ellipse(450,30,60,280,15,20);
ellipse(475,20,340,170,20,15);
ellipse(510,28,340,160,22,17);
ellipse(516,41,200,80,20,10);
ellipse(480,46,153,360,31,15);
floodfill(516,30,WHITE);


    //mountains
    int i=0;
    while(i<=480)
    {

        setcolor(BROWN);
        setfillstyle(SOLID_FILL,BROWN);
        int mountains[]= {i,100,i+80,0,i+160,100,i,100};
        drawpoly(4,mountains);

        floodfill(i+80,50,BROWN);

        i+=160;
    }


    //birds
setcolor(BLACK);
  arc(160,50,0,120,20);
  arc(198,50,60,180,20);

    //pond
    setcolor(BLUE);
    setfillstyle(SOLID_FILL,BLUE);
    ellipse(80,400,0,360,80,60);
    floodfill(80,400,BLUE);







    //treetrunk
    setcolor(BROWN);
    setfillstyle(SOLID_FILL,BROWN);
    arc(425,400,-60,40,100);
    arc(665,400,140,240,100);
    arc(500,310,90,320,40);
    arc(500,240,50,290,40);
    arc(585,240,-90,120,40);
    arc(585,310,-120,110,40);
    arc(545,210,-15,195,40);
    line(0,470,650,470);//bottom line
    line(500,310,545,380);//left v
    line(545,380,585,310);//right v
    floodfill(545,400,BROWN);

    //tree curves
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    arc(500,310,90,320,40);
    arc(500,240,50,290,40);
    arc(585,240,-90,120,40);
    arc(585,310,-120,110,40);
    arc(545,210,-15,195,40);
    line(500,310,545,380);
    line(545,380,585,310);
    floodfill(545,310,GREEN);

    //grass
setcolor(GREEN);
  int j = 0;
  while(j<640)
   {
     int grass[] = {j,475,j+2,456,j+4,475,j,475};
     drawpoly(4,grass);
     setfillstyle(SOLID_FILL,GREEN);
     fillpoly(4,grass);
     j+= 4;
   }


   getch();
    closegraph();
}
