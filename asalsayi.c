#include <stdio.h>
#include <stdlib.h>


int main(){
    int sayi,i,j,flag;
    printf("Bir sayi giriniz :");scanf("%d",&sayi);
    for(i=sayi+1; ;i++){
    	flag=0;
      for(j=2;j<i/2;j++){
      	if(i%j==0){
      	  flag=1;
      	  break;
      }
      	
	}
	  if(flag==0){
	    printf("\nGirdiginiz sayidan sonraki ilk asal sayi :%d\n",i);
	  	break;
       }
	}
	

	system("pause");
	return 0;
}

