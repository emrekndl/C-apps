#include <stdio.h>
#include <stdlib.h>

int main(){
	char cumle[20],karakter;
	int i=0;
	printf("Bir cumle giriniz(Bitirmek için . ):");
	do{
		karakter=getche();
		cumle[i]=karakter;
		i++;
	}while(karakter!='.'&& i<20);
	printf("\nGirdiginiz Cumle :%s\n",cumle);
	system("pause");
	return 0;
}
