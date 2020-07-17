#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
     int i,j,a,b,satir,sutun,matris[10][10];
     for(i=0;i<10;i++){
     	for(j=0;j<10;j++){
         matris[i][j]=0;
        
	   }
       
	 }
	srand(time(NULL));
	satir=rand()%10;
	sutun=rand()%10;
	matris[satir][sutun]=1;
	 
	 printf("\n");
	 
   for(a=0;a<10;a++){
     	for(b=0;b<10;b++){
     		printf(" %d ",matris[a][b]);
		 }
		 printf("\n");
	 }
	 printf("\n");
	system("pause");
	return 0;
}

