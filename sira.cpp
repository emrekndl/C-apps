#include <stdio.h>
#include <stdlib.h>


int main(){
	int n=7;
	int c[n]={3,5,7,9,1,4,6};
	int min,tmp;
      system("cls");
      printf("Dizi :\n");
      for(int a=0;a<7;a++){
      	printf("%d-",c[a]);
	  }
	
	for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i;j<n;j++){
	
		if(c[j]<c[min]){
		min=j;
		
		}
	}
		    tmp=c[i];
			c[i]=c[min];
			c[min]=tmp;
	}
	printf("\nSirali Dizi :\n");
	for(int b=0;b<7;b++){
      	printf("%d-",c[b]);
	  }
	
		
	return 0;
	system("PAUSE");
	
	
}
