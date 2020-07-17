#include <stdio.h>
#include <stdlib.h>


int main(){
   int sayi,i,j;
   printf("Bir sayi giriniz :");scanf("%d",&sayi);
   
   for(i=0;i<sayi;i++){
   	for(j=0;j<sayi;j++){
   		if(i==sayi-1 || j==sayi-1|| i+j==sayi-1){
   			printf("%d",sayi);
		   }else{
		   	printf(" ");
		   }
	   }
	   printf("\n");
   }   

	system("pause");
	return 0;
}

