#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int a [10] [10],n;
	printf("Kare matrisin tipini giriniz : "); scanf("%u",&n); printf("\n a matrisi :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("a(%u,%u)=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	system("PAUSE");
	return 0;
}
