#include <stdio.h>
#include <stdlib.h>

int main(){
	int sayi,i,j;
	printf("Bir sayi giriniz :");scanf("%d",&sayi);
	int matris[sayi][sayi];
	for(i=0;i<sayi;i++){
		for(j=0;j<sayi;j++){
			if(i== j|| i+j==sayi-1 || i==0 || j==0 || i==sayi-1 || j==sayi-1){
				matris[i][j]=1;
			}else{
				matris[i][j]=0;
			}
		}
	}
	printf("\n");
	for(i=0;i<sayi;i++){
		for(j=0;j<sayi;j++){
			printf("%d",matris[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
