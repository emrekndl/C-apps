#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#define pi 3.14159

float gotoxy(float x, float y);


 int main(){
	
	float x,y,m1,m2,r,i;
	
	printf("Cemberin merkezini giriniz(x) : ");
	 scanf("%f",&m1);
	printf("Cemberin merkezini giriniz(y) : ");
	 scanf("%f",&m2);
	
	printf("Cemberin yaricapini giriniz : ");
	 scanf("%f",&r);
    
	printf("\n");	
	         
    for(i=0;i<=360;i+=0.01){
        x=r-(r*cos((i*pi)/180));
        y=r-(r*sin((i*pi/180)));
		
	   gotoxy(x+m1,y+m2);
	 printf("%c",254);
	}
	   gotoxy(0,(r*3)+1);
	
	system("PAUSE");
	return 0;
}
  
  float gotoxy(float x,float y){

     COORD c;
     c.X=x; 
     c.Y=y; 
     
	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
	 
	 return 0;	
    }
