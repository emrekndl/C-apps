#include <stdio.h>
#include <stdlib.h>

	
	int alan[10][10];
	int i,j,x=0,y=0;

 int main() {
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			alan[i][j]==0;	
		}	
	}
	
	for(i=0;i<10;i++){
		    for(j=0;j<10;j++){
			  printf("%d",alan[i][j]);
		}
		printf("\n");	
	}
	printf("\n");
     char kalem;
	 int komut;
	 
		 while(komut!=0){ 
		printf("ilerlemek icin bir komut giriniz:(cikmak icin->0)\nKalemi acmak icin 'a' kapatmak icin 'k' harfine basin ----->> a1 -- k1 <<");
		printf("\n1 ==> Kalem Yukari\n2 ==> Kalem Asagi\n3 ==> Kalem Saga \n4 ==> Kalem Sola\n");scanf("%c%d",&kalem,&komut);
		  if(kalem=='a'){
		  	
      	switch(komut){
      		case 1:
      			if(x!=0){
      			alan[x][y]=1;x--;alan[x][y]=2;}system("cls");
				break;
      		case 2: 
      		    if(x!=9){
      		  	alan[x][y]=1;x++;alan[x][y]=2;}system("cls");
      		  	break;
      		case 3:
      			if(y!=9){
      			alan[x][y]=1;y++;alan[x][y]=2;}system("cls");
      			break;
      		case 4:
      			if(y!=0){
      			alan[x][y]=1;y--;alan[x][y]=2;}system("cls");
      		default:printf("Yanlis aralikte deger hirdiniz!!(1-4)\n");system("cls");
		  }
	  }else if(kalem=='k'){
	  	
	  	switch(komut){
      		case 1:
      			if(x!=0){
      			alan[x][y]=0;x--;alan[x][y]=2;}system("cls");
				break;
      		case 2:
      		if(x!=9){
      			alan[x][y]=0;x++;alan[x][y]=2;}system("cls");
      		  	break;
      		case 3:
      			if(y!=9){
      			alan[x][y]=0;y++;alan[x][y]=2;}system("cls");
      			break;
      		case 4:
      			if(y!=0){
      			alan[x][y]=0;y--;alan[x][y]=2;}system("cls");
      			break;
      		default:printf("Yanlis aralikte deger girdiniz!!(1-4)\n");system("cls");
		  }
	  }
              
		for(i=0;i<10;i++){
		    for(j=0;j<10;j++){
			  printf("%d",alan[i][j]);
		}
		printf("\n");	
	}
	printf("\n\a");
	
	
	}
	printf("\n");
	system("pause");
	return 0;
}
    
	
	
	
	
	
