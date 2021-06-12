#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void dda(int x1, int y1, int x2, int y2)
int dx = x2-x1;
int dy = y2-y1;
float xk = x1;
float yk = y1;
int step;
int i;
float xinc, yinc;
if (abs(dx) >= abs(dy
{
step: = abs(dx);
}
else
{
step = abs(dy);
}
xinc = dx/(float)step;
yinc = dy/(float)step;
for(i=0; i<=step; i++)
{
if (i%4 != 0)
{
putpixel (xk, yk, WHITE);
delay (50);
}
xk = xk + xinc;
yk = yk + yinc;
putpixel(x2, y2, WHITE):
void main()
{
int gd = DETECT, gm;
int x1, x2, y1, y2;
initgraph(&gd,&gm, "C:\\TurboC3\\BGI");
printf ('Enter end point co-ordinates of the line:");
scanf ("%d%d%d%d",&x1, &y1, &x2, &y2);
dda(x1, y1, x2, y2);
dda(x1+3,y1,x2+3,y2);
dda(x1+2,y1,x2+2,y2);
dda(x1+1,y1,x2+1,y2);
getch();
}