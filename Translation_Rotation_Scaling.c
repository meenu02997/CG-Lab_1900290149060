Write a program of Translation, Rotation & Scaling using Composite Transformation.

#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
#include<math.h>  
int x1,y1,x2,y2,x3,y3,a,b;  
void draw();  
void rotate();  
int main(void)  
{  
int gd=DETECT,gm;  
initgraph(&gd,&gm,"C:\\TC\\BGI");  
printf("Enter first co-ordinate value for triangle:");  
scanf("%d%d",&x1,&y1);  
printf("Enter second co-ordinatevalues for triangle:");  
scanf("%d%d",&x2,&y2);  
printf("Enter third co-ordinate valuesfor triangle:");  
scanf("%d%d",&x3,&y3);  
draw();  
getch();  
rotate();  
getch();  
  
return 0;  
}  