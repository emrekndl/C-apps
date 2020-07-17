#include <stdio.h>
#include <stdlib.h>

int karakter(char a[]){
	int i=0;
	while(a[i])
	 i++;
	return i;
}

int main(){
	char cumle[50];
	printf("Cumle giriniz :\n");
	gets(cumle);
	printf("\nGirdiginiz cumle %d tane karakterden olusmaktadir.\n",karakter(cumle));
	
	system("pause");
	return 0;
}
